\context Staff = "Cello" <<
	\set Staff.instrumentName = "Cello"
	\set Staff.shortInstrumentName = "Cl."
	\set Staff.midiInstrument = "Cello"
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "voz-cello" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		\time 4/4
		\clef "bass"

		\key c \major
		c 1  |
		c 1  |
		c 1  |
		c 2. b, 4  |
%% 5
		a, 2 d  |
		g 2. g 4  |
		f 2 e  |
		d 2 c 4 b,  |
		a, 2 fis, 4 a,  |
%% 10
		g, 1  |
		\key d \major
		d 2 cis  |
		b, 2 a,  |
		g, 1  |
		a, 4 b, 8 cis ~ cis 2  |
%% 15
		d 2 e  |
		fis 2 e  |
		d 1  |
		\key c \major
		c 1  |
		c 4 d e g  |
%% 20
		f 2 e  |
		d 2 c 4 b,  |
		a, 2 fis, 4 a,  |
		g, 2 ~ g, 8 a, b, 4  |
		c 1  |
%% 25
		c 2. b, 4  |
		a, 2 d  |
		g, 1  |
		a, 1  |
		\bar "|."
	}
>>
