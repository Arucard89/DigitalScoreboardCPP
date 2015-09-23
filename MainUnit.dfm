object MainForm: TMainForm
  Left = 422
  Top = 209
  Width = 1237
  Height = 713
  Caption = #1062#1077#1085#1090#1088' '#1091#1087#1088#1072#1074#1083#1077#1085#1080#1103' '#1094#1080#1092#1088#1086#1074#1086#1081' '#1087#1072#1085#1077#1083#1100#1102
  Color = clMoneyGreen
  DefaultMonitor = dmPrimary
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  Menu = MainMenu1
  OldCreateOrder = False
  OnCloseQuery = FormCloseQuery
  OnCreate = FormCreate
  OnDestroy = FormDestroy
  OnResize = FormResize
  PixelsPerInch = 96
  TextHeight = 13
  object PageControl1: TPageControl
    Left = 0
    Top = 0
    Width = 1221
    Height = 649
    ActivePage = FightSettings
    Align = alTop
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'Arial'
    Font.Style = []
    MultiLine = True
    ParentFont = False
    TabIndex = 1
    TabOrder = 0
    object FightingControls: TTabSheet
      BorderWidth = 20
      Caption = '    '#1059#1087#1088#1072#1074#1083#1077#1085#1080#1077' '#1089#1093#1074#1072#1090#1082#1086#1081'     '
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'Arial'
      Font.Style = []
      ParentFont = False
      object Player1GroupBox: TGroupBox
        Left = 628
        Top = 113
        Width = 545
        Height = 459
        Align = alRight
        Caption = #1059#1095#1072#1089#1090#1085#1080#1082' '#1089#1087#1088#1072#1074#1072
        Font.Charset = RUSSIAN_CHARSET
        Font.Color = clWindowText
        Font.Height = -16
        Font.Name = 'Arial'
        Font.Style = [fsBold, fsItalic]
        ParentFont = False
        TabOrder = 0
        object Player1NameLabel: TLabel
          Left = 2
          Top = 20
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
          Top = 42
          Width = 541
          Height = 74
          Align = alTop
          BevelOuter = bvNone
          Caption = 'Player1ScoresPanel'
          Font.Charset = RUSSIAN_CHARSET
          Font.Color = clWindowText
          Font.Height = -29
          Font.Name = 'Arial'
          Font.Style = [fsBold]
          ParentFont = False
          TabOrder = 0
        end
        object Player1AdvantagePanel: TPanel
          Left = 2
          Top = 116
          Width = 231
          Height = 56
          Align = alLeft
          BevelOuter = bvNone
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
          Top = 116
          Width = 310
          Height = 56
          Align = alClient
          BevelOuter = bvNone
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
          Top = 172
          Width = 541
          Height = 285
          Align = alBottom
          Caption = 'Player1ScoresButtonsPanel'
          ParentColor = True
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
              Top = 20
              Width = 95
              Height = 115
              Align = alLeft
              BorderWidth = 20
              ParentColor = True
              TabOrder = 0
              OnResize = Player1OneScorePanelResize
              object Player1OneScorePlusBitBtn: TBitBtn
                Tag = 1
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
                OnClick = Player1ThreeScorePlusBitBtnClick
              end
              object Player1OneScoreMinusBitBtn: TBitBtn
                Tag = -1
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
                OnClick = Player1ThreeScorePlusBitBtnClick
              end
            end
            object Player1FourScorePanel: TPanel
              Left = 297
              Top = 20
              Width = 240
              Height = 115
              Align = alClient
              BorderWidth = 20
              ParentColor = True
              TabOrder = 1
              object Player1FourScorePlusBitBtn: TBitBtn
                Tag = 4
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
                OnClick = Player1ThreeScorePlusBitBtnClick
              end
              object Player1FourScoreMinusBitBtn: TBitBtn
                Tag = -4
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
                OnClick = Player1ThreeScorePlusBitBtnClick
              end
            end
            object Player1TwoScorePanel: TPanel
              Left = 97
              Top = 20
              Width = 104
              Height = 115
              Align = alLeft
              BorderWidth = 20
              ParentColor = True
              TabOrder = 2
              OnResize = Player1OneScorePanelResize
              object Player1TwoScorePlusBitBtn: TBitBtn
                Tag = 2
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
                OnClick = Player1ThreeScorePlusBitBtnClick
              end
              object Player1TwoScoreMinusBitBtn: TBitBtn
                Tag = -2
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
                OnClick = Player1ThreeScorePlusBitBtnClick
              end
            end
            object Player1ThreeScorePanel: TPanel
              Left = 201
              Top = 20
              Width = 96
              Height = 115
              Align = alLeft
              BorderWidth = 20
              ParentColor = True
              TabOrder = 3
              OnResize = Player1OneScorePanelResize
              object Player1ThreeScorePlusBitBtn: TBitBtn
                Tag = 3
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
                OnClick = Player1ThreeScorePlusBitBtnClick
              end
              object Player1ThreeScoreMinusBitBtn: TBitBtn
                Tag = -3
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
                OnClick = Player1ThreeScorePlusBitBtnClick
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
            Visible = False
            object Player1ChangeAdvantagePanel: TPanel
              Left = 2
              Top = 20
              Width = 276
              Height = 124
              Align = alClient
              BevelOuter = bvNone
              BorderWidth = 20
              ParentColor = True
              TabOrder = 0
              object Player1AdvantagePlusBitBtn: TBitBtn
                Tag = 1
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
                OnClick = Player1AdvantagePlusBitBtnClick
              end
              object Player1AdvantageMinusBitBtn: TBitBtn
                Tag = -1
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
                OnClick = Player1AdvantagePlusBitBtnClick
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
              Top = 20
              Width = 255
              Height = 124
              Align = alClient
              BevelOuter = bvNone
              BorderWidth = 20
              ParentColor = True
              TabOrder = 0
              object Player1PenaltyPlusBitBtn: TBitBtn
                Tag = 1
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
                OnClick = Player1PenaltyMinusBitBtnClick
              end
              object Player1PenaltyMinusBitBtn: TBitBtn
                Tag = -1
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
                OnClick = Player1PenaltyMinusBitBtnClick
              end
            end
          end
        end
      end
      object Player2GroupBox: TGroupBox
        Left = 0
        Top = 113
        Width = 628
        Height = 459
        Align = alClient
        Caption = #1059#1095#1072#1089#1090#1085#1080#1082' '#1089#1083#1077#1074#1072
        Font.Charset = RUSSIAN_CHARSET
        Font.Color = clWindowText
        Font.Height = -16
        Font.Name = 'Arial'
        Font.Style = [fsBold, fsItalic]
        ParentFont = False
        TabOrder = 1
        object Player2NameLabel: TLabel
          Left = 2
          Top = 20
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
          Top = 42
          Width = 624
          Height = 74
          Align = alTop
          BevelOuter = bvNone
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
          Left = 347
          Top = 116
          Width = 279
          Height = 52
          Align = alRight
          BevelOuter = bvNone
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
          Left = 2
          Top = 116
          Width = 345
          Height = 52
          Align = alClient
          BevelOuter = bvNone
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
          Top = 168
          Width = 624
          Height = 289
          Align = alBottom
          Caption = 'Player2ScoresButtonsPanel'
          ParentColor = True
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
              Top = 20
              Width = 95
              Height = 104
              Align = alLeft
              BorderWidth = 20
              ParentColor = True
              TabOrder = 0
              OnResize = Player1OneScorePanelResize
              object Player2OneScorePlusBitBtn: TBitBtn
                Tag = 1
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
                OnClick = Player2OneScorePlusBitBtnClick
              end
              object Player2OneScoreMinusBitBtn: TBitBtn
                Tag = -1
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
                OnClick = Player2OneScorePlusBitBtnClick
              end
            end
            object Player2TwoScorePanel: TPanel
              Left = 97
              Top = 20
              Width = 104
              Height = 104
              Align = alLeft
              BorderWidth = 20
              ParentColor = True
              TabOrder = 1
              OnResize = Player1OneScorePanelResize
              object Player2TwoScorePlusBitBtn: TBitBtn
                Tag = 2
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
                OnClick = Player2OneScorePlusBitBtnClick
              end
              object Player2TwoScoreMinusBitBtn: TBitBtn
                Tag = -2
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
                OnClick = Player2OneScorePlusBitBtnClick
              end
            end
            object Player2FourScorePanel: TPanel
              Left = 305
              Top = 20
              Width = 315
              Height = 104
              Align = alClient
              BorderWidth = 20
              ParentColor = True
              TabOrder = 2
              object Player2FourScorePlusBitBtn: TBitBtn
                Tag = 4
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
                OnClick = Player2OneScorePlusBitBtnClick
              end
              object Player2FourScoreMinusBitBtn: TBitBtn
                Tag = -4
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
                OnClick = Player2OneScorePlusBitBtnClick
              end
            end
            object Player2ThreeScorePanel: TPanel
              Left = 201
              Top = 20
              Width = 104
              Height = 104
              Align = alLeft
              BorderWidth = 20
              ParentColor = True
              TabOrder = 3
              OnResize = Player1OneScorePanelResize
              object Player2ThreeScorePlusBitBtn: TBitBtn
                Tag = 3
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
                OnClick = Player2OneScorePlusBitBtnClick
              end
              object Player2ThreeScoreMinusBitBtn: TBitBtn
                Tag = -3
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
                OnClick = Player2OneScorePlusBitBtnClick
              end
            end
          end
          object Player2AdvantageGroupBox: TGroupBox
            Left = 391
            Top = 127
            Width = 232
            Height = 161
            Align = alRight
            Caption = 'Player2AdvantageGroupBox'
            TabOrder = 1
            Visible = False
            object Player2ChangeAdvantagePanel: TPanel
              Left = 2
              Top = 20
              Width = 228
              Height = 139
              Align = alClient
              BevelOuter = bvNone
              BorderWidth = 20
              ParentColor = True
              TabOrder = 0
              object Player2AdvantagePlusBitBtn: TBitBtn
                Tag = 1
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
                OnClick = Player2AdvantagePlusBitBtnClick
              end
              object Player2AdvantageMinusBitBtn: TBitBtn
                Tag = -1
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
            Left = 1
            Top = 127
            Width = 390
            Height = 161
            Align = alClient
            Caption = 'Player2PenaltyGroupBox'
            TabOrder = 2
            object Player2ChangePenaltyPanel: TPanel
              Left = 2
              Top = 20
              Width = 386
              Height = 139
              Align = alClient
              BevelOuter = bvNone
              BorderWidth = 20
              ParentColor = True
              TabOrder = 0
              object Player2PenaltyPlusBitBtn: TBitBtn
                Tag = 1
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
                OnClick = Player2PenaltyMinusBitBtnClick
              end
              object Player2PenaltyMinusBitBtn: TBitBtn
                Tag = -1
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
                OnClick = Player2PenaltyMinusBitBtnClick
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
        Font.Name = 'Comic Sans MS'
        Font.Style = [fsBold]
        ParentFont = False
        TabOrder = 2
      end
      object CategoryPanel: TPanel
        Left = 0
        Top = 0
        Width = 1173
        Height = 17
        Align = alTop
        Caption = 'CategoryPanel'
        Font.Charset = RUSSIAN_CHARSET
        Font.Color = clWindowText
        Font.Height = -16
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
        ParentColor = True
        TabOrder = 4
        object StartFightBtn: TBitBtn
          Left = 8
          Top = 8
          Width = 89
          Height = 41
          Caption = #1057#1058#1040#1056#1058
          Enabled = False
          Font.Charset = RUSSIAN_CHARSET
          Font.Color = clGreen
          Font.Height = -21
          Font.Name = 'Arial'
          Font.Style = [fsBold]
          ParentFont = False
          TabOrder = 0
          OnClick = StartFightBtnClick
          Style = bsWin31
        end
        object PauseFightBtn: TBitBtn
          Left = 104
          Top = 8
          Width = 89
          Height = 41
          Caption = #1055#1040#1059#1047#1040
          Enabled = False
          Font.Charset = RUSSIAN_CHARSET
          Font.Color = clOlive
          Font.Height = -21
          Font.Name = 'Arial'
          Font.Style = [fsBold]
          ParentFont = False
          TabOrder = 1
          OnClick = PauseFightBtnClick
        end
        object StopFightBtn: TBitBtn
          Left = 208
          Top = 8
          Width = 89
          Height = 41
          Caption = #1057#1058#1054#1055
          Enabled = False
          Font.Charset = RUSSIAN_CHARSET
          Font.Color = clMaroon
          Font.Height = -21
          Font.Name = 'Arial'
          Font.Style = [fsBold]
          ParentFont = False
          TabOrder = 2
          OnClick = StopFightBtnClick
        end
        object ResetBtn: TBitBtn
          Left = 320
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
          OnClick = ResetBtnClick
        end
      end
    end
    object FightSettings: TTabSheet
      BorderWidth = 20
      Caption = '    '#1053#1072#1089#1090#1088#1086#1081#1082#1080' '#1089#1093#1074#1072#1090#1082#1080'   '
      ImageIndex = 1
      OnShow = FightSettingsShow
      object InformationGroupBox: TGroupBox
        Left = 0
        Top = 0
        Width = 1173
        Height = 136
        Align = alTop
        Caption = #1053#1072#1089#1090#1088#1086#1081#1082#1072' '#1080#1085#1092#1086#1088#1084#1072#1094#1080#1080' '#1086' '#1089#1093#1074#1072#1090#1082#1077
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
        end
        object AcceptInformationBtn: TBitBtn
          Left = 872
          Top = 88
          Width = 297
          Height = 41
          Caption = #1055#1088#1080#1085#1103#1090#1100
          Default = True
          TabOrder = 0
          OnClick = AcceptInformationBtnClick
          Glyph.Data = {
            DE010000424DDE01000000000000760000002800000024000000120000000100
            0400000000006801000000000000000000001000000000000000000000000000
            80000080000000808000800000008000800080800000C0C0C000808080000000
            FF0000FF000000FFFF00FF000000FF00FF00FFFF0000FFFFFF00333333333333
            3333333333333333333333330000333333333333333333333333F33333333333
            00003333344333333333333333388F3333333333000033334224333333333333
            338338F3333333330000333422224333333333333833338F3333333300003342
            222224333333333383333338F3333333000034222A22224333333338F338F333
            8F33333300003222A3A2224333333338F3838F338F33333300003A2A333A2224
            33333338F83338F338F33333000033A33333A222433333338333338F338F3333
            0000333333333A222433333333333338F338F33300003333333333A222433333
            333333338F338F33000033333333333A222433333333333338F338F300003333
            33333333A222433333333333338F338F00003333333333333A22433333333333
            3338F38F000033333333333333A223333333333333338F830000333333333333
            333A333333333333333338330000333333333333333333333333333333333333
            0000}
          NumGlyphs = 2
        end
        object AgeGroupBox: TGroupBox
          Left = 2
          Top = 40
          Width = 185
          Height = 94
          Align = alLeft
          Caption = #1042#1086#1079#1088#1072#1089#1090
          TabOrder = 1
          object AgeComboBox: TComboBox
            Left = 8
            Top = 48
            Width = 153
            Height = 27
            ItemHeight = 19
            TabOrder = 0
            OnChange = AgeComboBoxChange
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
          object BeltComboBox: TComboBox
            Left = 8
            Top = 48
            Width = 137
            Height = 27
            ItemHeight = 19
            TabOrder = 0
            OnChange = AgeComboBoxChange
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
          object WeightComboBox: TComboBox
            Left = 8
            Top = 48
            Width = 153
            Height = 27
            ItemHeight = 19
            Sorted = True
            TabOrder = 0
            OnChange = AgeComboBoxChange
            OnDropDown = WeightComboBoxDropDown
          end
        end
        object UpdateCategoryInfoBtn: TBitBtn
          Left = 872
          Top = 40
          Width = 297
          Height = 33
          Caption = #1047#1072#1075#1088#1091#1079#1080#1090#1100' '#1080#1085#1092#1086#1088#1084#1072#1094#1080#1102' '#1080#1079' '#1073#1072#1079#1099
          Enabled = False
          TabOrder = 4
          OnClick = UpdateCategoryInfoBtnClick
          Glyph.Data = {
            DE010000424DDE01000000000000760000002800000024000000120000000100
            0400000000006801000000000000000000001000000000000000000000000000
            80000080000000808000800000008000800080800000C0C0C000808080000000
            FF0000FF000000FFFF00FF000000FF00FF00FFFF0000FFFFFF00333333444444
            33333333333F8888883F33330000324334222222443333388F3833333388F333
            000032244222222222433338F8833FFFFF338F3300003222222AAAAA22243338
            F333F88888F338F30000322222A33333A2224338F33F8333338F338F00003222
            223333333A224338F33833333338F38F00003222222333333A444338FFFF8F33
            3338888300003AAAAAAA33333333333888888833333333330000333333333333
            333333333333333333FFFFFF000033333333333344444433FFFF333333888888
            00003A444333333A22222438888F333338F3333800003A2243333333A2222438
            F38F333333833338000033A224333334422224338338FFFFF8833338000033A2
            22444442222224338F3388888333FF380000333A2222222222AA243338FF3333
            33FF88F800003333AA222222AA33A3333388FFFFFF8833830000333333AAAAAA
            3333333333338888883333330000333333333333333333333333333333333333
            0000}
          NumGlyphs = 2
        end
      end
      object FightTimeGroupBox: TGroupBox
        Left = 0
        Top = 337
        Width = 1173
        Height = 112
        Align = alTop
        Caption = #1053#1072#1089#1090#1088#1086#1081#1082#1072' '#1080#1085#1092#1086#1088#1084#1072#1094#1080#1080' '#1086' '#1074#1088#1077#1084#1077#1085#1080' '#1087#1086#1077#1076#1080#1085#1082#1072
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
        end
        object MinutesGroupBox: TGroupBox
          Left = 2
          Top = 40
          Width = 153
          Height = 70
          Align = alLeft
          Caption = #1052#1080#1085#1091#1090#1099
          TabOrder = 0
          object MinutesSpinEdit: TCSpinEdit
            Left = 8
            Top = 32
            Width = 121
            Height = 29
            MaxValue = 99
            TabOrder = 0
            OnChange = MinutesSpinEditChange
          end
        end
        object SecondsGroupBox: TGroupBox
          Left = 155
          Top = 40
          Width = 159
          Height = 70
          Align = alLeft
          Caption = #1057#1077#1082#1091#1085#1076#1099
          TabOrder = 1
          object SecondsSpinEdit: TCSpinEdit
            Left = 8
            Top = 32
            Width = 121
            Height = 29
            MaxValue = 59
            TabOrder = 0
            OnChange = MinutesSpinEditChange
          end
        end
        object AcceptTimeBtn: TBitBtn
          Left = 872
          Top = 64
          Width = 297
          Height = 41
          Caption = #1055#1088#1080#1085#1103#1090#1100
          Default = True
          TabOrder = 2
          OnClick = AcceptTimeBtnClick
          Glyph.Data = {
            DE010000424DDE01000000000000760000002800000024000000120000000100
            0400000000006801000000000000000000001000000000000000000000000000
            80000080000000808000800000008000800080800000C0C0C000808080000000
            FF0000FF000000FFFF00FF000000FF00FF00FFFF0000FFFFFF00333333333333
            3333333333333333333333330000333333333333333333333333F33333333333
            00003333344333333333333333388F3333333333000033334224333333333333
            338338F3333333330000333422224333333333333833338F3333333300003342
            222224333333333383333338F3333333000034222A22224333333338F338F333
            8F33333300003222A3A2224333333338F3838F338F33333300003A2A333A2224
            33333338F83338F338F33333000033A33333A222433333338333338F338F3333
            0000333333333A222433333333333338F338F33300003333333333A222433333
            333333338F338F33000033333333333A222433333333333338F338F300003333
            33333333A222433333333333338F338F00003333333333333A22433333333333
            3338F38F000033333333333333A223333333333333338F830000333333333333
            333A333333333333333338330000333333333333333333333333333333333333
            0000}
          NumGlyphs = 2
        end
      end
      object PlayersNamesGroupBox: TGroupBox
        Left = 0
        Top = 136
        Width = 1173
        Height = 201
        Align = alTop
        Caption = #1053#1072#1089#1090#1088#1086#1081#1082#1072' '#1080#1085#1092#1086#1088#1084#1072#1094#1080#1080' '#1086#1073' '#1080#1084#1077#1085#1072#1093' '#1089#1087#1086#1088#1090#1089#1084#1077#1085#1086#1074
        Font.Charset = ANSI_CHARSET
        Font.Color = clWindowText
        Font.Height = -16
        Font.Name = 'Arial'
        Font.Style = [fsBold]
        ParentFont = False
        TabOrder = 2
        object Player1NameGroupBox: TGroupBox
          Left = 2
          Top = 21
          Width = 1169
          Height = 60
          Align = alTop
          Caption = #1057#1087#1086#1088#1090#1089#1084#1077#1085' '#1089#1087#1088#1072#1074#1072
          TabOrder = 0
          object Player1ComboBox: TComboBox
            Left = 8
            Top = 24
            Width = 1137
            Height = 27
            ItemHeight = 19
            Sorted = True
            TabOrder = 0
            OnChange = Player1ComboBoxChange
            OnDropDown = UpdatePlayersInfoBtnClick
          end
        end
        object Player2NameGroupBox: TGroupBox
          Left = 2
          Top = 81
          Width = 1169
          Height = 60
          Align = alTop
          Caption = #1057#1087#1086#1088#1090#1089#1084#1077#1085' '#1089#1083#1077#1074#1072
          TabOrder = 1
          object Player2ComboBox: TComboBox
            Left = 8
            Top = 24
            Width = 1137
            Height = 27
            ItemHeight = 19
            Sorted = True
            TabOrder = 0
            OnChange = Player1ComboBoxChange
            OnDropDown = UpdatePlayersInfoBtnClick
          end
        end
        object AcceptPlayersNamesBtn: TBitBtn
          Left = 872
          Top = 152
          Width = 297
          Height = 41
          Caption = #1055#1088#1080#1085#1103#1090#1100
          Default = True
          TabOrder = 2
          OnClick = AcceptPlayersNamesBtnClick
          Glyph.Data = {
            DE010000424DDE01000000000000760000002800000024000000120000000100
            0400000000006801000000000000000000001000000000000000000000000000
            80000080000000808000800000008000800080800000C0C0C000808080000000
            FF0000FF000000FFFF00FF000000FF00FF00FFFF0000FFFFFF00333333333333
            3333333333333333333333330000333333333333333333333333F33333333333
            00003333344333333333333333388F3333333333000033334224333333333333
            338338F3333333330000333422224333333333333833338F3333333300003342
            222224333333333383333338F3333333000034222A22224333333338F338F333
            8F33333300003222A3A2224333333338F3838F338F33333300003A2A333A2224
            33333338F83338F338F33333000033A33333A222433333338333338F338F3333
            0000333333333A222433333333333338F338F33300003333333333A222433333
            333333338F338F33000033333333333A222433333333333338F338F300003333
            33333333A222433333333333338F338F00003333333333333A22433333333333
            3338F38F000033333333333333A223333333333333338F830000333333333333
            333A333333333333333338330000333333333333333333333333333333333333
            0000}
          NumGlyphs = 2
        end
        object UpdatePlayersInfoBtn: TBitBtn
          Left = 8
          Top = 160
          Width = 297
          Height = 33
          Caption = #1047#1072#1075#1088#1091#1079#1080#1090#1100' '#1080#1085#1092#1086#1088#1084#1072#1094#1080#1102' '#1080#1079' '#1073#1072#1079#1099
          Enabled = False
          TabOrder = 3
          OnClick = UpdatePlayersInfoBtnClick
          Glyph.Data = {
            DE010000424DDE01000000000000760000002800000024000000120000000100
            0400000000006801000000000000000000001000000000000000000000000000
            80000080000000808000800000008000800080800000C0C0C000808080000000
            FF0000FF000000FFFF00FF000000FF00FF00FFFF0000FFFFFF00333333444444
            33333333333F8888883F33330000324334222222443333388F3833333388F333
            000032244222222222433338F8833FFFFF338F3300003222222AAAAA22243338
            F333F88888F338F30000322222A33333A2224338F33F8333338F338F00003222
            223333333A224338F33833333338F38F00003222222333333A444338FFFF8F33
            3338888300003AAAAAAA33333333333888888833333333330000333333333333
            333333333333333333FFFFFF000033333333333344444433FFFF333333888888
            00003A444333333A22222438888F333338F3333800003A2243333333A2222438
            F38F333333833338000033A224333334422224338338FFFFF8833338000033A2
            22444442222224338F3388888333FF380000333A2222222222AA243338FF3333
            33FF88F800003333AA222222AA33A3333388FFFFFF8833830000333333AAAAAA
            3333333333338888883333330000333333333333333333333333333333333333
            0000}
          NumGlyphs = 2
        end
      end
      object AcceptAllConfigurationBtn: TBitBtn
        Left = 816
        Top = 512
        Width = 353
        Height = 41
        Caption = #1055#1088#1080#1085#1103#1090#1100' '#1074#1089#1077' '#1080#1079#1084#1077#1085#1077#1085#1080#1103
        Font.Charset = ANSI_CHARSET
        Font.Color = clWindowText
        Font.Height = -16
        Font.Name = 'Arial'
        Font.Style = [fsBold]
        ParentFont = False
        TabOrder = 3
        OnClick = AcceptAllConfigurationBtnClick
        Glyph.Data = {
          F2010000424DF201000000000000760000002800000024000000130000000100
          0400000000007C01000000000000000000001000000000000000000000000000
          80000080000000808000800000008000800080800000C0C0C000808080000000
          FF0000FF000000FFFF00FF000000FF00FF00FFFF0000FFFFFF00333334433333
          3333333333388F3333333333000033334224333333333333338338F333333333
          0000333422224333333333333833338F33333333000033422222243333333333
          83333338F3333333000034222A22224333333338F33F33338F33333300003222
          A2A2224333333338F383F3338F33333300003A2A222A222433333338F8333F33
          38F33333000034A22222A22243333338833333F3338F333300004222A2222A22
          2433338F338F333F3338F3330000222A3A2224A22243338F3838F338F3338F33
          0000A2A333A2224A2224338F83338F338F3338F300003A33333A2224A2224338
          333338F338F3338F000033333333A2224A2243333333338F338F338F00003333
          33333A2224A2233333333338F338F83300003333333333A2224A333333333333
          8F338F33000033333333333A222433333333333338F338F30000333333333333
          A224333333333333338F38F300003333333333333A223333333333333338F8F3
          000033333333333333A3333333333333333383330000}
        NumGlyphs = 2
      end
      object GrapplingCheckBox: TCheckBox
        Left = 0
        Top = 456
        Width = 281
        Height = 25
        Caption = #1056#1077#1078#1080#1084' '#1075#1088#1101#1087#1087#1083#1080#1085#1075#1072
        TabOrder = 4
        OnClick = GrapplingCheckBoxClick
      end
    end
    object FightLogs: TTabSheet
      Caption = #1061#1088#1086#1085#1086#1083#1086#1075#1080#1103' '#1087#1086#1077#1076#1080#1085#1082#1072
      ImageIndex = 2
      object Label1: TLabel
        Left = 0
        Top = 0
        Width = 1213
        Height = 22
        Align = alTop
        Alignment = taCenter
        Caption = 
          #1060#1086#1088#1084#1072#1090' '#1079#1072#1087#1080#1089#1080': '#1076#1072#1090#1072' '#1074#1088#1077#1084#1103';  '#1085#1072#1089#1090#1088#1086#1081#1082#1080' '#1089#1093#1074#1072#1090#1082#1080'; '#1074#1088#1077#1084#1103' '#1076#1086' '#1082#1086#1085#1094#1072' '#1089#1093 +
          #1074#1072#1090#1082#1080'; '#1076#1077#1081#1089#1090#1074#1080#1077
      end
      object FightHistoryMemo: TMemo
        Left = 24
        Top = 32
        Width = 425
        Height = 529
        Font.Charset = ANSI_CHARSET
        Font.Color = clWindowText
        Font.Height = -15
        Font.Name = 'Arial'
        Font.Style = []
        ParentFont = False
        ReadOnly = True
        ScrollBars = ssBoth
        TabOrder = 0
      end
    end
  end
  object Timer1: TTimer
    OnTimer = Timer1Timer
    Left = 1024
  end
  object Timer2: TTimer
    Enabled = False
    Interval = 250
    OnTimer = Timer2Timer
    Left = 1088
  end
  object MainMenu1: TMainMenu
    Left = 920
    object N1: TMenuItem
      Caption = #1054#1089#1085#1086#1074#1085#1086#1077' '#1084#1077#1085#1102
      object N2: TMenuItem
        Caption = #1054#1090#1082#1088#1099#1090#1100' '#1086#1082#1085#1086' '#1085#1072#1089#1090#1088#1086#1077#1082
        OnClick = OpenConfigurationButtonClick
      end
      object N3: TMenuItem
        Caption = #1055#1086#1082#1072#1079#1072#1090#1100' '#1090#1072#1073#1083#1086
        OnClick = ShowDisplayFormBtnClick
      end
      object N4: TMenuItem
        Caption = #1053#1072#1089#1090#1088#1086#1081#1082#1080' '#1089#1086#1077#1076#1080#1085#1077#1085#1080#1103' '#1089' '#1041#1044' '#1089#1086#1088#1077#1074#1085#1086#1074#1072#1085#1080#1081
        OnClick = N4Click
      end
    end
    object N5: TMenuItem
      Caption = #1048#1085#1092#1086#1088#1084#1072#1094#1080#1103' '#1086' '#1087#1088#1086#1075#1088#1072#1084#1084#1077
    end
    object N6: TMenuItem
      Caption = #1042#1099#1093#1086#1076
      OnClick = N6Click
    end
  end
end
