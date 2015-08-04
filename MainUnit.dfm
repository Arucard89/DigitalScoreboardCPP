object MainForm: TMainForm
  Left = 462
  Top = 125
  Width = 1237
  Height = 703
  Caption = 'MainForm'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  OnCreate = FormCreate
  OnResize = FormResize
  PixelsPerInch = 96
  TextHeight = 13
  object PageControl1: TPageControl
    Left = 0
    Top = 0
    Width = 1221
    Height = 633
    ActivePage = FightSettings
    Align = alTop
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'Arial'
    Font.Style = [fsBold, fsItalic]
    MultiLine = True
    ParentFont = False
    TabIndex = 1
    TabOrder = 0
    object FightingControls: TTabSheet
      BorderWidth = 20
      Caption = #1059#1087#1088#1072#1074#1083#1077#1085#1080#1077' '#1089#1093#1074#1072#1090#1082#1086#1081
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'Arial'
      Font.Style = [fsBold]
      ParentFont = False
      object Player1GroupBox: TGroupBox
        Left = 0
        Top = 113
        Width = 545
        Height = 442
        Align = alLeft
        Caption = 'Player1GroupBox'
        Font.Charset = RUSSIAN_CHARSET
        Font.Color = clWindowText
        Font.Height = -16
        Font.Name = 'Arial'
        Font.Style = [fsBold]
        ParentFont = False
        TabOrder = 0
        object Player1NameLabel: TLabel
          Left = 2
          Top = 21
          Width = 541
          Height = 22
          Align = alTop
          Alignment = taCenter
          Caption = 'Player1NameLabel'
          Font.Charset = RUSSIAN_CHARSET
          Font.Color = clWindowText
          Font.Height = -19
          Font.Name = 'Arial'
          Font.Style = [fsBold]
          ParentFont = False
        end
        object Player1ScoresPanel: TPanel
          Left = 2
          Top = 43
          Width = 541
          Height = 74
          Align = alTop
          Caption = 'Player1ScoresPanel'
          Font.Charset = RUSSIAN_CHARSET
          Font.Color = clWindowText
          Font.Height = -29
          Font.Name = 'Arial'
          Font.Style = [fsBold]
          ParentFont = False
          TabOrder = 0
          OnResize = FormCreate
        end
        object Player1AdvantagePanel: TPanel
          Left = 2
          Top = 117
          Width = 231
          Height = 38
          Align = alLeft
          Caption = 'Player1AdvantagePanel'
          Font.Charset = RUSSIAN_CHARSET
          Font.Color = clWindowText
          Font.Height = -29
          Font.Name = 'Arial'
          Font.Style = [fsBold]
          ParentFont = False
          TabOrder = 1
        end
        object Player1PenaltyPanel: TPanel
          Left = 233
          Top = 117
          Width = 310
          Height = 38
          Align = alClient
          Caption = 'Player1PenaltyPanel'
          Font.Charset = RUSSIAN_CHARSET
          Font.Color = clWindowText
          Font.Height = -29
          Font.Name = 'Arial'
          Font.Style = [fsBold]
          ParentFont = False
          TabOrder = 2
        end
        object Player1ScoresButtonsPanel: TPanel
          Left = 2
          Top = 155
          Width = 541
          Height = 285
          Align = alBottom
          Caption = 'Player1ScoresButtonsPanel'
          TabOrder = 3
          object Player1ScoresGroupBox: TGroupBox
            Left = 1
            Top = 1
            Width = 539
            Height = 137
            Align = alTop
            Caption = 'Player1ScoresGroupBox'
            TabOrder = 0
            object Player1OneScorePanel: TPanel
              Left = 2
              Top = 21
              Width = 95
              Height = 114
              Align = alLeft
              BorderWidth = 20
              Caption = 'Player1OneScorePanel'
              TabOrder = 0
              OnResize = Player1OneScorePanelResize
              object Player1OneScorePlusBitBtn: TBitBtn
                Left = 5
                Top = 5
                Width = 75
                Height = 25
                Caption = '+1'
                Font.Charset = RUSSIAN_CHARSET
                Font.Color = clGreen
                Font.Height = -21
                Font.Name = 'Arial'
                Font.Style = [fsBold]
                ParentFont = False
                TabOrder = 0
              end
              object Player1OneScoreMinusBitBtn: TBitBtn
                Left = 8
                Top = 56
                Width = 75
                Height = 25
                Caption = '-1'
                Font.Charset = RUSSIAN_CHARSET
                Font.Color = clRed
                Font.Height = -21
                Font.Name = 'Arial'
                Font.Style = [fsBold]
                ParentFont = False
                TabOrder = 1
              end
            end
            object Player1FourScorePanel: TPanel
              Left = 297
              Top = 21
              Width = 240
              Height = 114
              Align = alClient
              BorderWidth = 20
              Caption = 'Player1FourScorePanel'
              TabOrder = 1
              object Player1FourScorePlusBitBtn: TBitBtn
                Left = 5
                Top = 5
                Width = 75
                Height = 25
                Caption = '+4'
                Font.Charset = RUSSIAN_CHARSET
                Font.Color = clGreen
                Font.Height = -21
                Font.Name = 'Arial'
                Font.Style = [fsBold]
                ParentFont = False
                TabOrder = 0
              end
              object Player1FourScoreMinusBitBtn: TBitBtn
                Left = 24
                Top = 48
                Width = 75
                Height = 25
                Caption = '-4'
                Font.Charset = RUSSIAN_CHARSET
                Font.Color = clRed
                Font.Height = -21
                Font.Name = 'Arial'
                Font.Style = [fsBold]
                ParentFont = False
                TabOrder = 1
              end
            end
            object Player1TwoScorePanel: TPanel
              Left = 97
              Top = 21
              Width = 104
              Height = 114
              Align = alLeft
              BorderWidth = 20
              Caption = 'Player1TwoScorePanel'
              TabOrder = 2
              OnResize = Player1OneScorePanelResize
              object Player1TwoScorePlusBitBtn: TBitBtn
                Left = 5
                Top = 5
                Width = 75
                Height = 25
                Caption = '+2'
                Font.Charset = RUSSIAN_CHARSET
                Font.Color = clGreen
                Font.Height = -21
                Font.Name = 'Arial'
                Font.Style = [fsBold]
                ParentFont = False
                TabOrder = 0
              end
              object Player1TwoScoreMinusBitBtn: TBitBtn
                Left = 8
                Top = 64
                Width = 75
                Height = 25
                Caption = '-2'
                Font.Charset = RUSSIAN_CHARSET
                Font.Color = clRed
                Font.Height = -21
                Font.Name = 'Arial'
                Font.Style = [fsBold]
                ParentFont = False
                TabOrder = 1
              end
            end
            object Player1ThreeScorePanel: TPanel
              Left = 201
              Top = 21
              Width = 96
              Height = 114
              Align = alLeft
              BorderWidth = 20
              Caption = 'Player1ThreeScorePanel'
              TabOrder = 3
              OnResize = Player1OneScorePanelResize
              object Player1ThreeScorePlusBitBtn: TBitBtn
                Left = 5
                Top = 5
                Width = 75
                Height = 25
                Caption = '+3'
                Font.Charset = RUSSIAN_CHARSET
                Font.Color = clGreen
                Font.Height = -21
                Font.Name = 'Arial'
                Font.Style = [fsBold]
                ParentFont = False
                TabOrder = 0
              end
              object Player1ThreeScoreMinusBitBtn: TBitBtn
                Left = 8
                Top = 64
                Width = 75
                Height = 25
                Caption = '-3'
                Font.Charset = RUSSIAN_CHARSET
                Font.Color = clRed
                Font.Height = -21
                Font.Name = 'Arial'
                Font.Style = [fsBold]
                ParentFont = False
                TabOrder = 1
              end
            end
          end
          object Player1AdvantageGroupBox: TGroupBox
            Left = 1
            Top = 138
            Width = 280
            Height = 146
            Align = alLeft
            Caption = 'Player1AdvantageGroupBox'
            TabOrder = 1
            object Player1ChangeAdvantagePanel: TPanel
              Left = 2
              Top = 21
              Width = 276
              Height = 123
              Align = alClient
              BorderWidth = 20
              Caption = 'Player1ChangeAdvantagePanel'
              TabOrder = 0
              object Player1AdvantagePlusBitBtn: TBitBtn
                Left = 5
                Top = 5
                Width = 75
                Height = 25
                Caption = '+A'
                Font.Charset = RUSSIAN_CHARSET
                Font.Color = clGreen
                Font.Height = -21
                Font.Name = 'Arial'
                Font.Style = [fsBold]
                ParentFont = False
                TabOrder = 0
              end
              object Player1AdvantageMinusBitBtn: TBitBtn
                Left = 8
                Top = 40
                Width = 75
                Height = 25
                Caption = '-A'
                Font.Charset = RUSSIAN_CHARSET
                Font.Color = clRed
                Font.Height = -21
                Font.Name = 'Arial'
                Font.Style = [fsBold]
                ParentFont = False
                TabOrder = 1
              end
            end
          end
          object Player1PenaltyGroupBox: TGroupBox
            Left = 281
            Top = 138
            Width = 259
            Height = 146
            Align = alClient
            Caption = 'Player1PenaltyGroupBox'
            TabOrder = 2
            object Player1ChangePenaltyPanel: TPanel
              Left = 2
              Top = 21
              Width = 255
              Height = 123
              Align = alClient
              BorderWidth = 20
              Caption = 'Player1ChangePenaltyPanel'
              TabOrder = 0
              object Player1PenaltyPlusBitBtn: TBitBtn
                Left = 5
                Top = 5
                Width = 75
                Height = 25
                Caption = '+P'
                Font.Charset = RUSSIAN_CHARSET
                Font.Color = clGreen
                Font.Height = -21
                Font.Name = 'Arial'
                Font.Style = [fsBold]
                ParentFont = False
                TabOrder = 0
              end
              object Player1PenaltyMinusBitBtn: TBitBtn
                Left = 8
                Top = 40
                Width = 75
                Height = 25
                Caption = '-P'
                Font.Charset = RUSSIAN_CHARSET
                Font.Color = clRed
                Font.Height = -21
                Font.Name = 'Arial'
                Font.Style = [fsBold]
                ParentFont = False
                TabOrder = 1
              end
            end
          end
        end
      end
      object Player2GroupBox: TGroupBox
        Left = 545
        Top = 113
        Width = 628
        Height = 442
        Align = alClient
        Caption = 'Player2GroupBox'
        Font.Charset = RUSSIAN_CHARSET
        Font.Color = clWindowText
        Font.Height = -16
        Font.Name = 'Arial'
        Font.Style = [fsBold]
        ParentFont = False
        TabOrder = 1
        object Player2NameLabel: TLabel
          Left = 2
          Top = 21
          Width = 624
          Height = 22
          Align = alTop
          Alignment = taCenter
          Caption = 'Player2NameLabel'
          Font.Charset = RUSSIAN_CHARSET
          Font.Color = clWindowText
          Font.Height = -19
          Font.Name = 'Arial'
          Font.Style = [fsBold]
          ParentFont = False
        end
        object Player2ScoresPanel: TPanel
          Left = 2
          Top = 43
          Width = 624
          Height = 74
          Align = alTop
          Caption = 'Player2ScoresPanel'
          Font.Charset = RUSSIAN_CHARSET
          Font.Color = clWindowText
          Font.Height = -29
          Font.Name = 'Arial'
          Font.Style = [fsBold]
          ParentFont = False
          TabOrder = 0
        end
        object Player2AdvantagePanel: TPanel
          Left = 2
          Top = 117
          Width = 279
          Height = 34
          Align = alLeft
          Caption = 'Player2AdvantagePanel'
          Font.Charset = RUSSIAN_CHARSET
          Font.Color = clWindowText
          Font.Height = -29
          Font.Name = 'Arial'
          Font.Style = [fsBold]
          ParentFont = False
          TabOrder = 1
        end
        object Player2PenaltyPanel: TPanel
          Left = 281
          Top = 117
          Width = 345
          Height = 34
          Align = alClient
          Caption = 'Player2PenaltyPanel'
          Font.Charset = RUSSIAN_CHARSET
          Font.Color = clWindowText
          Font.Height = -29
          Font.Name = 'Arial'
          Font.Style = [fsBold]
          ParentFont = False
          TabOrder = 2
        end
        object Player2ScoresButtonsPanel: TPanel
          Left = 2
          Top = 151
          Width = 624
          Height = 289
          Align = alBottom
          Caption = 'Player2ScoresButtonsPanel'
          TabOrder = 3
          object Player2ScoresGroupBox: TGroupBox
            Left = 1
            Top = 1
            Width = 622
            Height = 126
            Align = alTop
            Caption = 'Player2ScoresGroupBox'
            TabOrder = 0
            object Player2OneScorePanel: TPanel
              Left = 2
              Top = 21
              Width = 95
              Height = 103
              Align = alLeft
              BorderWidth = 20
              Caption = 'Player2OneScorePanel'
              TabOrder = 0
              OnResize = Player1OneScorePanelResize
              object Player2OneScorePlusBitBtn: TBitBtn
                Left = 5
                Top = 5
                Width = 75
                Height = 41
                Caption = '+1'
                Font.Charset = RUSSIAN_CHARSET
                Font.Color = clGreen
                Font.Height = -21
                Font.Name = 'Arial'
                Font.Style = [fsBold]
                ParentFont = False
                TabOrder = 0
              end
              object Player2OneScoreMinusBitBtn: TBitBtn
                Left = 8
                Top = 64
                Width = 75
                Height = 33
                Caption = '-1'
                Font.Charset = RUSSIAN_CHARSET
                Font.Color = clRed
                Font.Height = -21
                Font.Name = 'Arial'
                Font.Style = [fsBold]
                ParentFont = False
                TabOrder = 1
              end
            end
            object Player2TwoScorePanel: TPanel
              Left = 97
              Top = 21
              Width = 104
              Height = 103
              Align = alLeft
              BorderWidth = 20
              Caption = 'Player2TwoScorePanel'
              TabOrder = 1
              OnResize = Player1OneScorePanelResize
              object Player2TwoScorePlusBitBtn: TBitBtn
                Left = 5
                Top = 5
                Width = 75
                Height = 41
                Caption = '+2'
                Font.Charset = RUSSIAN_CHARSET
                Font.Color = clGreen
                Font.Height = -21
                Font.Name = 'Arial'
                Font.Style = [fsBold]
                ParentFont = False
                TabOrder = 0
              end
              object Player2TwoScoreMinusBitBtn: TBitBtn
                Left = 16
                Top = 56
                Width = 75
                Height = 33
                Caption = '-2'
                Font.Charset = RUSSIAN_CHARSET
                Font.Color = clRed
                Font.Height = -21
                Font.Name = 'Arial'
                Font.Style = [fsBold]
                ParentFont = False
                TabOrder = 1
              end
            end
            object Player2FourScorePanel: TPanel
              Left = 305
              Top = 21
              Width = 315
              Height = 103
              Align = alClient
              BorderWidth = 20
              Caption = 'Player2FourScorePanel'
              TabOrder = 2
              object Player2FourScorePlusBitBtn: TBitBtn
                Left = 5
                Top = 5
                Width = 75
                Height = 41
                Caption = '+4'
                Font.Charset = RUSSIAN_CHARSET
                Font.Color = clGreen
                Font.Height = -21
                Font.Name = 'Arial'
                Font.Style = [fsBold]
                ParentFont = False
                TabOrder = 0
              end
              object Player2FourScoreMinusBitBtn: TBitBtn
                Left = 24
                Top = 64
                Width = 75
                Height = 33
                Caption = '-4'
                Font.Charset = RUSSIAN_CHARSET
                Font.Color = clRed
                Font.Height = -21
                Font.Name = 'Arial'
                Font.Style = [fsBold]
                ParentFont = False
                TabOrder = 1
              end
            end
            object Player2ThreeScorePanel: TPanel
              Left = 201
              Top = 21
              Width = 104
              Height = 103
              Align = alLeft
              BorderWidth = 20
              Caption = 'Player2ThreeScorePanel'
              TabOrder = 3
              OnResize = Player1OneScorePanelResize
              object Player2ThreeScorePlusBitBtn: TBitBtn
                Left = 5
                Top = 5
                Width = 75
                Height = 41
                Caption = '+3'
                Font.Charset = RUSSIAN_CHARSET
                Font.Color = clGreen
                Font.Height = -21
                Font.Name = 'Arial'
                Font.Style = [fsBold]
                ParentFont = False
                TabOrder = 0
              end
              object Player2ThreeScoreMinusBitBtn: TBitBtn
                Left = 8
                Top = 64
                Width = 75
                Height = 33
                Caption = '-3'
                Font.Charset = RUSSIAN_CHARSET
                Font.Color = clRed
                Font.Height = -21
                Font.Name = 'Arial'
                Font.Style = [fsBold]
                ParentFont = False
                TabOrder = 1
              end
            end
          end
          object Player2AdvantageGroupBox: TGroupBox
            Left = 1
            Top = 127
            Width = 232
            Height = 161
            Align = alLeft
            Caption = 'Player2AdvantageGroupBox'
            TabOrder = 1
            object Player2ChangeAdvantagePanel: TPanel
              Left = 2
              Top = 21
              Width = 228
              Height = 138
              Align = alClient
              BorderWidth = 20
              Caption = 'Player2ChangeAdvantagePanel'
              TabOrder = 0
              object Player2AdvantagePlusBitBtn: TBitBtn
                Left = 5
                Top = 5
                Width = 75
                Height = 41
                Caption = '+A'
                Font.Charset = RUSSIAN_CHARSET
                Font.Color = clGreen
                Font.Height = -21
                Font.Name = 'Arial'
                Font.Style = [fsBold]
                ParentFont = False
                TabOrder = 0
              end
              object Player2AdvantageMinusBitBtn: TBitBtn
                Left = 8
                Top = 48
                Width = 75
                Height = 25
                Caption = '-A'
                Font.Charset = RUSSIAN_CHARSET
                Font.Color = clRed
                Font.Height = -21
                Font.Name = 'Arial'
                Font.Style = [fsBold]
                ParentFont = False
                TabOrder = 1
              end
            end
          end
          object Player2PenaltyGroupBox: TGroupBox
            Left = 233
            Top = 127
            Width = 390
            Height = 161
            Align = alClient
            Caption = 'Player2PenaltyGroupBox'
            TabOrder = 2
            object Player2ChangePenaltyPanel: TPanel
              Left = 2
              Top = 21
              Width = 386
              Height = 138
              Align = alClient
              BorderWidth = 20
              Caption = 'Player2ChangePenaltyPanel'
              TabOrder = 0
              object Player2PenaltyPlusBitBtn: TBitBtn
                Left = 5
                Top = 5
                Width = 75
                Height = 25
                Caption = '+P'
                Font.Charset = RUSSIAN_CHARSET
                Font.Color = clGreen
                Font.Height = -21
                Font.Name = 'Arial'
                Font.Style = [fsBold]
                ParentFont = False
                TabOrder = 0
              end
              object Player2PenaltyMinusBitBtn: TBitBtn
                Left = 8
                Top = 40
                Width = 75
                Height = 25
                Caption = '-P'
                Font.Charset = RUSSIAN_CHARSET
                Font.Color = clRed
                Font.Height = -21
                Font.Name = 'Arial'
                Font.Style = [fsBold]
                ParentFont = False
                TabOrder = 1
              end
            end
          end
        end
      end
      object TimePanel: TPanel
        Left = 0
        Top = 17
        Width = 1173
        Height = 41
        Align = alTop
        Caption = '00:00'
        Font.Charset = RUSSIAN_CHARSET
        Font.Color = clWindowText
        Font.Height = -48
        Font.Name = 'Arial'
        Font.Style = [fsBold]
        ParentFont = False
        TabOrder = 2
      end
      object InformationPanel: TPanel
        Left = 0
        Top = 0
        Width = 1173
        Height = 17
        Align = alTop
        Caption = 'InformationPanel'
        Font.Charset = RUSSIAN_CHARSET
        Font.Color = clWindowText
        Font.Height = -13
        Font.Name = 'Arial'
        Font.Style = [fsBold]
        ParentFont = False
        TabOrder = 3
      end
      object FightControlsPanel: TPanel
        Left = 0
        Top = 58
        Width = 1173
        Height = 55
        Align = alTop
        Caption = 'FightControlsPanel'
        TabOrder = 4
        object StartFightBtn: TBitBtn
          Left = 8
          Top = 8
          Width = 89
          Height = 41
          Caption = #1057#1058#1040#1056#1058
          Font.Charset = RUSSIAN_CHARSET
          Font.Color = clGreen
          Font.Height = -21
          Font.Name = 'Arial'
          Font.Style = [fsBold]
          ParentFont = False
          TabOrder = 0
          Style = bsWin31
        end
        object PauseFightBtn: TBitBtn
          Left = 104
          Top = 8
          Width = 89
          Height = 41
          Caption = #1055#1040#1059#1047#1040
          Font.Charset = RUSSIAN_CHARSET
          Font.Color = clOlive
          Font.Height = -21
          Font.Name = 'Arial'
          Font.Style = [fsBold]
          ParentFont = False
          TabOrder = 1
        end
        object StopFightBtn: TBitBtn
          Left = 208
          Top = 8
          Width = 89
          Height = 41
          Caption = #1057#1058#1054#1055
          Font.Charset = RUSSIAN_CHARSET
          Font.Color = clMaroon
          Font.Height = -21
          Font.Name = 'Arial'
          Font.Style = [fsBold]
          ParentFont = False
          TabOrder = 2
        end
        object ResetBtn: TBitBtn
          Left = 328
          Top = 8
          Width = 75
          Height = 41
          Caption = #1057#1041#1056#1054#1057
          Font.Charset = RUSSIAN_CHARSET
          Font.Color = clRed
          Font.Height = -21
          Font.Name = 'Arial'
          Font.Style = [fsBold]
          ParentFont = False
          TabOrder = 3
        end
      end
    end
    object FightSettings: TTabSheet
      BorderWidth = 20
      Caption = #1053#1072#1089#1090#1088#1086#1081#1082#1080' '#1089#1093#1074#1072#1090#1082#1080
      ImageIndex = 1
      object InformationGroupBox: TGroupBox
        Left = 0
        Top = 201
        Width = 1173
        Height = 136
        Align = alTop
        Caption = 'InformationGroupBox'
        Font.Charset = ANSI_CHARSET
        Font.Color = clWindowText
        Font.Height = -16
        Font.Name = 'Arial'
        Font.Style = [fsBold]
        ParentFont = False
        TabOrder = 0
        object CurrentInfoSetupLabel: TLabel
          Left = 2
          Top = 21
          Width = 1169
          Height = 19
          Align = alTop
          Alignment = taCenter
          Caption = 'CurrentInfoSetupLabel'
        end
        object AcceptInformationBtn: TBitBtn
          Left = 872
          Top = 88
          Width = 297
          Height = 41
          TabOrder = 0
          Kind = bkOK
        end
        object AgeGroupBox: TGroupBox
          Left = 2
          Top = 40
          Width = 185
          Height = 94
          Align = alLeft
          Caption = #1042#1086#1079#1088#1072#1089#1090
          TabOrder = 1
          object ComboBox1: TComboBox
            Left = 8
            Top = 48
            Width = 153
            Height = 27
            ItemHeight = 19
            Sorted = True
            TabOrder = 0
            Text = 'AgeComboBox'
          end
        end
        object BeltGroupBox: TGroupBox
          Left = 187
          Top = 40
          Width = 185
          Height = 94
          Align = alLeft
          Caption = #1055#1086#1103#1089
          TabOrder = 2
          object ComboBox2: TComboBox
            Left = 8
            Top = 48
            Width = 137
            Height = 27
            ItemHeight = 19
            Sorted = True
            TabOrder = 0
            Text = 'BeltComboBox'
          end
        end
        object WeightGroupBox: TGroupBox
          Left = 372
          Top = 40
          Width = 185
          Height = 94
          Align = alLeft
          Caption = #1042#1077#1089
          TabOrder = 3
          object ComboBox3: TComboBox
            Left = 24
            Top = 48
            Width = 153
            Height = 27
            ItemHeight = 19
            Sorted = True
            TabOrder = 0
            Text = 'WeightComboBox'
          end
        end
      end
      object FightTimeGroupBox: TGroupBox
        Left = 0
        Top = 337
        Width = 1173
        Height = 112
        Align = alTop
        Caption = 'FightTimeGroupBox'
        Font.Charset = ANSI_CHARSET
        Font.Color = clWindowText
        Font.Height = -16
        Font.Name = 'Arial'
        Font.Style = [fsBold]
        ParentFont = False
        TabOrder = 1
        object CurrentTimeSetupLabel: TLabel
          Left = 2
          Top = 21
          Width = 1169
          Height = 19
          Align = alTop
          Alignment = taCenter
          Caption = 'CurrentTimeSetupLabel'
        end
        object MinutesGroupBox: TGroupBox
          Left = 2
          Top = 40
          Width = 153
          Height = 70
          Align = alLeft
          Caption = 'MinutesGroupBox'
          TabOrder = 0
          object MinutesSpinEdit: TCSpinEdit
            Left = 16
            Top = 32
            Width = 121
            Height = 29
            TabOrder = 0
          end
        end
        object SecondsGroupBox: TGroupBox
          Left = 155
          Top = 40
          Width = 159
          Height = 70
          Align = alLeft
          Caption = 'SecondsGroupBox'
          TabOrder = 1
          object SecondsSpinEdit: TCSpinEdit
            Left = 16
            Top = 32
            Width = 121
            Height = 29
            MaxValue = 59
            TabOrder = 0
          end
        end
        object AcceptTimeBtn: TBitBtn
          Left = 872
          Top = 64
          Width = 297
          Height = 41
          TabOrder = 2
          Kind = bkOK
        end
      end
      object PlayersNamesGroupBox: TGroupBox
        Left = 0
        Top = 0
        Width = 1173
        Height = 201
        Align = alTop
        Caption = #1053#1072#1089#1090#1088#1086#1081#1082#1072' '#1080#1085#1092#1086#1088#1084#1072#1094#1080#1080' '#1086#1073' '#1080#1084#1077#1085#1072#1093' '#1089#1087#1086#1088#1089#1084#1077#1085#1086#1074
        Font.Charset = ANSI_CHARSET
        Font.Color = clWindowText
        Font.Height = -16
        Font.Name = 'Arial'
        Font.Style = [fsBold]
        ParentFont = False
        TabOrder = 2
        object AcceptPlayersNamesBtn: TBitBtn
          Left = 872
          Top = 152
          Width = 297
          Height = 41
          TabOrder = 0
          Kind = bkOK
        end
        object Player1NameGroupBox: TGroupBox
          Left = 2
          Top = 21
          Width = 1169
          Height = 60
          Align = alTop
          Caption = #1057#1087#1086#1088#1090#1089#1084#1077#1085' '#1089#1083#1077#1074#1072
          TabOrder = 1
          object Player1ComboBox: TComboBox
            Left = 8
            Top = 24
            Width = 1137
            Height = 27
            ItemHeight = 19
            Sorted = True
            TabOrder = 0
            Text = 'Player1ComboBox'
          end
        end
        object Player2NameGroupBox: TGroupBox
          Left = 2
          Top = 81
          Width = 1169
          Height = 60
          Align = alTop
          Caption = #1057#1087#1086#1088#1090#1089#1084#1077#1085' '#1089#1087#1088#1072#1074#1072
          TabOrder = 2
          object Player2ComboBox: TComboBox
            Left = 8
            Top = 24
            Width = 1137
            Height = 27
            ItemHeight = 19
            Sorted = True
            TabOrder = 0
            Text = 'Player2ComboBox'
          end
        end
      end
      object AcceptAllConfigurationBtn: TBitBtn
        Left = 816
        Top = 512
        Width = 353
        Height = 41
        Font.Charset = ANSI_CHARSET
        Font.Color = clWindowText
        Font.Height = -16
        Font.Name = 'Arial'
        Font.Style = [fsBold]
        ParentFont = False
        TabOrder = 3
        Kind = bkAll
      end
      object OpenConfigurationButton: TButton
        Left = 80
        Top = 452
        Width = 337
        Height = 25
        Caption = 'OpenConfigurationButton'
        Font.Charset = ANSI_CHARSET
        Font.Color = clWindowText
        Font.Height = -16
        Font.Name = 'Arial'
        Font.Style = [fsBold]
        ParentFont = False
        TabOrder = 4
        OnClick = OpenConfigurationButtonClick
      end
    end
  end
end
