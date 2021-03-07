package healthcheck

import (
	"log"
	"net"
	"testing"
)

var srv1, srv2 Server

func init() {
	srv1, err := NewServer("tcp", ":1123")
	if err != nil {
		log.Println("error starting TCP server")
		return
	}
	srv2, err := NewServer("tcp", ":6250")
	if err != nil {
		log.Println("error starting TCP server")
		return
	}
	go func() {
		srv1.Run()
	}()
	go func() {
		srv2.Run()
	}()
}

func TestNETServer_Running(t *testing.T) {
	// Check that the server is up and can accept connections.
	servers := []struct {
		protocol string
		addr     string
	}{
		{"tcp", ":1123"},
		{"tcp", ":6250"},
	}
	for _, serv := range servers {
		conn, err := net.Dial(serv.protocol, serv.addr)
		if err != nil {
			t.Error("could not connect to server: ", err)
		}
		defer conn.Close()
	}
}
