\context Staff = "Viola" <<
	\set Staff.instrumentName = "Viola"
	\set Staff.shortInstrumentName = "Vla."
	\set Staff.midiInstrument = "Viola"
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "voz-viola" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		\time 4/4
		\clef "alto"

		\key c \major
		f' 2 e'  |
		d' 2 e'  |
		R1*3  |
		r2 r8 b a g  |
		f 2 e  |
		f 2 g 4 a 8 b  |
		e' 2 fis'  |
%% 10
		d' 1  |
		\key d \major
		r2 r8 e a d'  |
		g' 4 fis' e' d'  |
		d' 1  |
		e' 1  |
%% 15
		r2 r8 e a d'  |
		g' 4 fis' e' d'  |
		b 1  |
		\key c \major
		e' 1 ~  |
		e' 1  |
%% 20
		R1*3  |
		r2 r8 b a g  |
		f 2 e  |
%% 25
		f 2 g 4 a 8 b  |
		e' 2 fis'  |
		d' 1  |
		e' 1  |
		\bar "|."
	}
>>
