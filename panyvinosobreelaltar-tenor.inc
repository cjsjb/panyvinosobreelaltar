\context Staff = "tenor" \with { \consists Ambitus_engraver } <<
	\set Staff.instrumentName = "Tenor"
	\set Staff.shortInstrumentName = "T."
	\set Staff.midiInstrument = "Voice Oohs"
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "voz-tenor" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		\time 4/4
		\clef "treble_8"
		\key d \major

		R1  |
		r2. d 8 e  |
		fis 8 fis fis fis 4 e 8 d fis ~  |
		fis 8 e 4. r4 e 8 fis  |
%% 5
		g 8 g g g 4 fis 8 e fis ~  |
		fis 8 ~ fis 4 r8 r4 d 8 e  |
		fis 8 fis fis fis 4 e 8 d fis ~  |
		fis 8 e 4. r4 a 8 g  |
		fis 8 fis ~ fis fis g a g 4  |
%% 10
		fis 2. r4  |
		d' 4 d' d' 8 d' 4 d' 8  |
		d' 4 d' 8 d' 4. r4  |
		d' 4 d' d' 8 d' 4 d' 8  |
		d' 2. r4  |
%% 15
		fis 4 fis fis 8 e 4 d 8  |
		e 4 fis 8 e 4 r8 r fis  |
		fis 4 fis g 8 a g 4  |
		fis 1  |
		R1  |
		\bar "|."
	}

	\new Lyrics \lyricsto "voz-tenor" {
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
		Por los ni -- ños "que em" -- pie -- zan la vi --da,
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
