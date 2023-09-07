Disclaimer:
This is just an awareness for not to insert a random usb you found anywhere because you don’t know the power of how far it can harm you.This is for educational purposes only so don’t try to harm anyone or use it for illegal purposes.

Introduction:
Now begin with my project, so it was simple to enter a usb in any machine then get important files such as SAM, browser credentials etc you want. But the real catch is here if you enter any usb in any machine it would not allow all this to happen anyway because antivirus or windows defender can stop it but. So we want something which will enter but not as USB but a HID(Human Interference Devices) such as Keyboard Mouse.
(Note: Surf the internet about HID attacks, so you would know more how dangerous it can be, my project is just a glance of its power).

Requirements:
For this purpose we can use many things such as Rubber Duck from HAK 5, raspbery pi, ATtiny85 etc. So I chose ATtiny85(Digispark) for this HID attack, (as it has very little storage, but it was perfect for me and it just cost under PKR.1000/-.) so it would enter a system and act as a Keyboard and can do whatever a keyboard can do. To set this up you can find many detailed tutorials all over the internet.

Method:
Now it's time how we get the files, should we install a backdoor in the machine? or get a remote desktop connection, anything else. So, move with going to setup a FTP server then when we enter our BAD_USB it will just access our FTP server through that machine, copy all files we need to that server then remove its all traces that there nothing happened.
(Note: If you don’t know what FTP is, it is a File Transfer Protocol, and to set this up and know more about it, the internet is the best place you can learn.)

My Case:
In my case I copy the SAM file which includes machine user credentials, “Login  Data” and “Local State” files which have Google Chrome password manager and all username and passwords stored. Although these are encrypted, decrypting it isn’t that difficult for any one.
That’s it.

Thank You. 
