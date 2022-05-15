# text-2-speak-in-C-plus-plus
From this shot code you have to learn convert text to speech in C++ then you will make an awesome virtual assistant and work on so many other cool ideas.

Here first you have to dawnload a softwere espeak from http://espeak.sourceforge.net/ which is an open source softewre . 

Download the softwere respected to your operating system.

For example if you have a windows operating operating system then you have to click on to option "on windows".

After download in simply install it, durring installing leave all aption by default and click just next to every option.

Then go to the file wher you install it. in windows the the location of the file you download is C:\Program Files (x86)\eSpeak\.

Then in espeak go to command line eSpeak\command_line  inside the command line folder you will see an application name "espeak" just copy it and paste it in the folder wher you will write your c++ code.

Then Text to speech is very simple : When ever you want to speak anything you have to write the below four line.

1:	sring phrase = "Here will be the text you want to speak";
2:	string command = "espeak \""+phrase+"\"";     // the phrse inclosed in + signs is the name of above string. So if you change the above string name change this also
3:	const char* charCommand=command.c_str();
4:	system(charCommand);

I reammended you to see the Full program in the 
