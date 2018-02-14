Until I can effectivly use C# to build a GUI I will have a C++ form.

Goals:
	Milestones: in order of priority
		Make GUI window: TODO
		ADD A way to interface with (FUTURE) Shibari mapping router/filter: TODO
		ADD a user way to add previously unknown devices to be mappable to Shibari/ViGEM:TODO
			This would act like a calibration system, It goes through the inputs with the user and takes the given input
			(Either assigns numarical/float values to the recieved input and ask the user how they want to configure the translation to vigem/xbox/whatever or direct translation from input)
	Overview:
		1. Open configuartion file
		2. Check if file has been filled, If so go to step 5, otherwise go to next step
		3. Prompt user to specify where shibari is
		4. Store in a file
		5. Open gui
		6. Wait for (Run Shibari {version}) button to be pressed or for (Configure controller) button
		7. Procede depending on action (8 if run {?} if configure)
		8. Open shibari and send configuration to filter
		9. Display connections and other useful data to the user
	Steps done: none so far