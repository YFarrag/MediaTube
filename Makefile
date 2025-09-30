objects = main.o View.o Control.o MediaTube.o Channel.o Media.o MediaFactory.o AudioPlayer.o VideoPlayer.o O_Search.o C_Search.o OorC_Search.o
testobjects = test_main.o View.o TestControl.o Tester.o MediaTube.o Channel.o Media.o MediaFactory.o AudioPlayer.o VideoPlayer.o O_Search.o C_Search.o OorC_Search.o


all: a4 test

a4: $(objects)
	g++ -o a4 $(objects)

main.o: main.cc Array.h
	g++ -c main.cc 

test: $(testobjects)
	g++ -o test $(testobjects)

test_main.o: test_main.cc TestControl.h
	g++ -c test_main.cc

Tester.o: Tester.cc Tester.h
	g++ -c Tester.cc

TestControl.o: TestControl.cc TestControl.h
	g++ -c TestControl.cc

View.o: View.cc View.h Array.h
	g++ -c View.cc

Control.o: Control.cc Control.h Array.h
	g++ -c Control.cc

MediaTube.o: MediaTube.cc MediaTube.h Array.h
	g++ -c MediaTube.cc

Channel.o: Channel.cc Channel.h Array.h
	g++ -c Channel.cc

Media.o: Media.cc Media.h
	g++ -c Media.cc

AudioPlayer.o: AudioPlayer.cc AudioPlayer.h
	g++ -c AudioPlayer.cc

VideoPlayer.o: VideoPlayer.cc VideoPlayer.h
	g++ -c VideoPlayer.cc

MediaFactory.o: MediaFactory.cc MediaFactory.h
	g++ -c MediaFactory.cc

O_Search.o: O_Search.cc O_Search.h
	g++ -c O_Search.cc

C_Search.o: C_Search.cc C_Search.h
	g++ -c C_Search.cc

OorC_Search.o: OorC_Search.cc OorC_Search.h
	g++ -c OorC_Search.cc

clean:
	rm -f a4 test *.o
