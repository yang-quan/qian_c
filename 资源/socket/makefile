object = client.o service.o
all:$(object)
	cc -o client client.o
	cc -o service service.o
client.o: client.c
	cc -c client.c
service.o: service.c
	cc -c service.c
  
clean:  
	rm -rf *.o client service
