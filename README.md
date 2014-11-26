![alt tag](https://github.com/DeRaafMedia/ProjectSpeechBeacons/blob/master/bin/data/am-radio-transmitter-using-555-chip-2.jpg)

(A possible transmitter beacon circuit)

These beacons where made with Arduino's with AM transmitter shields attached to them. The beacons had a range of about 5 kilometers (I used more powerfull transmitters than shown here! I won't share that set up for legal reasons).

The beacons where programmed to send morse code transcript of some movie monologue and/or speeches. I made 4 beacons in total, speeches where taken from "The Great Dictator", "The People vs. Larry Flynt", "American History X" and "V for Vendetta". The movies where chosen at random from my DVD collection. (transcripts can be found in the [``bin/data/speeches``](https://github.com/DeRaafMedia/ProjectSpeechBeacons/tree/master/bin/data/speeches) directory).

The beacons were placed around the center of the city of Enschede, two of them transmitted for about one month (about the calculated battery lifetime), these where the "Great Dictator" speech and "People vs. Larry Flint" speech. The other two had a shorter lifetime. The "V for Vendetta" speech stopped transmitting after a few days. The "American History X" speech lasted about two weeks.

The Arduino library used can be found in the [``bin/data/morse``](https://github.com/DeRaafMedia/ProjectSpeechBeacons/tree/master/bin/data/morse) directory. (Installation. See ["Contributed Libraries"](http://www.arduino.cc/en/Reference/Libraries) on arduino.cc Libraries reference. Briefly, place these files in a ``morse`` subdirectory in your sketchbook directory.)

I used a different transmitter (more powerfull), but for testing purposes you could use the shown circuit. Hook up Arduino pin 13 (If you use the Example Arduino sketch) to the Audio + pin of the transmitter and  make a connection from the Arduino ground to the Audio - pin of the Transmitter and it should work (did not test this particulair circuit, but my set up was similar (555 based)).

I made these beacons as an "ode" and "lamentation". This installations shows the succes and failure of wise words. They have the potential to reach a large audience, but are most likely only heard by the people with the right "receiver" and knowledge to decode.
