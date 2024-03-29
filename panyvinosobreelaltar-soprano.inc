\context Staff = "soprano" \with { \consists Ambitus_engraver } <<
	\set Staff.instrumentName = "Soprano"
	\set Staff.shortInstrumentName = "S."
	\set Staff.midiInstrument = "Voice Oohs"
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "voz-soprano" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		\time 4/4
		\clef "treble"
		\key d \major

		R1  |
		r2. d' 8 e'  |
		fis' 8 fis' fis' fis' 4 e' 8 d' fis' ~  |
		fis' 8 e' 4. r4 e' 8 fis'  |
%% 5
		g' 8 g' g' g' 4 fis' 8 e' fis' ~  |
		fis' 8 ~ fis' 4 r8 r4 d' 8 e'  |
		fis' 8 fis' fis' fis' 4 e' 8 d' fis' ~  |
		fis' 8 e' 4. r4 fis' 8 e'  |
		d' 8 d' ~ d' d' e' fis' e' 4  |
%% 10
		d' 2. r4  |
		b' 4 b' b' 8 a' 4 g' 8  |
		a' 4 b' 8 a' 4. r4  |
		b' 4 b' b' 8 a' 4 g' 8  |
		a' 2. r4  |
%% 15
		fis' 4 fis' fis' 8 e' 4 d' 8  |
		e' 4 fis' 8 e' 4 r8 r d'  |
		d' 4 d' e' 8 fis' e' 4  |
		d' 1  |
		r2 r4 d' 8 e'  |
%% 20
		fis' 8 fis' fis' fis' 4 e' 8 d' fis' ~  |
		fis' 8 e' 4. r4 e' 8 fis'  |
		g' 8 g' g' g' 4 fis' 8 e' fis' ~  |
		fis' 8 ~ fis' 4 r8 r4 d' 8 e'  |
		fis' 8 fis' fis' fis' 4 e' 8 d' fis' ~  |
%% 25
		fis' 8 e' 4. r4 fis' 8 e'  |
		d' 8 d' ~ d' d' e' fis' e' 4  |
		d' 2. r4  |
		b' 4 b' b' 8 a' 4 g' 8  |
		a' 4 b' 8 a' 4. r4  |
%% 30
		b' 4 b' b' 8 a' 4 g' 8  |
		a' 2. r4  |
		fis' 4 fis' fis' 8 e' 4 d' 8  |
		e' 4 fis' 8 e' 4 r8 r d'  |
		d' 4 d' e' 8 fis' e' 4  |
%% 35
		d' 1  |
		r2 r4 d' 8 e'  |
		fis' 8 fis' fis' fis' 4 e' 8 d' fis' ~  |
		fis' 8 e' 4. r4 e' 8 fis'  |
		g' 8 g' g' g' 4 fis' 8 e' fis' ~  |
%% 40
		fis' 8 ~ fis' 4 r8 r4 d' 8 e'  |
		fis' 8 fis' fis' fis' 4 e' 8 d' fis' ~  |
		fis' 8 e' 4. r4 fis' 8 e'  |
		d' 8 d' ~ d' d' e' fis' e' 4  |
		d' 2. r4  |
%% 45
		b' 4 b' b' 8 a' 4 g' 8  |
		a' 4 b' 8 a' 4. r4  |
		b' 4 b' b' 8 a' 4 g' 8  |
		a' 2. r4  |
		fis' 4 fis' fis' 8 e' 4 d' 8  |
%% 50
		e' 4 fis' 8 e' 4 r8 r d'  |
		d' 4 d' e' 8 fis' e' 4  |
		d' 1  |
		R1  |
		\bar "|."
	}

	\new Lyrics \lyricsto "voz-soprano" {
		% por los hombres...
		Por los hom -- bres que vi -- ven u -- ni __ dos,
		por los hom -- bres que bus -- can la paz, __
		por los pue -- blos que no te co -- no __ cen,
		"te o" -- fre -- ce -- mos el vi -- no "y el" pan.

		% estribillo
		Pan y vi -- no so -- "bre el" al -- tar
		son o -- fren -- das "de a" -- mor.
		Pan y vi -- no se -- rán des -- pués
		tu cuer -- "po y" san -- gre, Se -- ñor.

		% por los niños...
		Por los ni -- ños "que em" -- pie -- zan la vi -- da,
		por los hom -- bres sin te -- cho "ni ho" -- gar, __
		por los pue -- blos que su -- fren la gue -- rra,
		"te o" -- fre -- ce -- mos el vi -- no "y el" pan.

		% estribillo
		Pan y vi -- no so -- "bre el" al -- tar
		son o -- fren -- das "de a" -- mor.
		Pan y vi -- no se -- rán des -- pués
		tu cuer -- "po y" san -- gre, Se -- ñor.

		% por aquéllos...
		Por a -- qué -- llos a quie -- nes que -- re -- mos,
		por no -- so -- tros y nues -- "tra a" -- mis -- tad, __
		por los vi -- vos  y por los di -- fun -- tos,
		"te o" -- fre -- ce -- mos el vi -- no "y el" pan.

		% estribillo
		Pan y vi -- no so -- "bre el" al -- tar
		son o -- fren -- das "de a" -- mor.
		Pan y vi -- no se -- rán des -- pués
		tu cuer -- "po y" san -- gre, Se -- ñor.
	}
>>
