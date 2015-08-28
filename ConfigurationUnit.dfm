object ConfigurationForm: TConfigurationForm
  Left = 638
  Top = 128
  Width = 811
  Height = 596
  Caption = 'ConfigurationForm'
  Color = clSkyBlue
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object Label11: TLabel
    Left = 0
    Top = 425
    Width = 795
    Height = 13
    Align = alTop
    Caption = '      '#1057#1087#1080#1089#1086#1082' '#1087#1088#1080#1085#1103#1090#1099#1093' '#1080#1079#1084#1077#1085#1077#1085#1080#1081
  end
  object PageControl1: TPageControl
    Left = 0
    Top = 0
    Width = 795
    Height = 425
    ActivePage = PictureSelectTab
    Align = alTop
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Arial'
    Font.Style = []
    ParentFont = False
    TabIndex = 3
    TabOrder = 0
    object PanelsFontTabSheet: TTabSheet
      Caption = #1053#1072#1089#1090#1088#1086#1081#1082#1080' '#1096#1088#1080#1092#1090#1086#1074' '#1087#1072#1085#1077#1083#1077#1081' '#1090#1072#1073#1083#1086
      Font.Charset = ANSI_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Arial'
      Font.Style = []
      ImageIndex = 2
      ParentFont = False
      object GroupBox6: TGroupBox
        Left = 0
        Top = 0
        Width = 787
        Height = 113
        Align = alTop
        Caption = #1064#1088#1080#1092#1090' '#1094#1077#1085#1090#1088#1072#1083#1100#1085#1099#1093' '#1087#1072#1085#1077#1083#1080
        Font.Charset = RUSSIAN_CHARSET
        Font.Color = clWindowText
        Font.Height = -16
        Font.Name = 'Arial'
        Font.Style = [fsBold, fsItalic]
        ParentFont = False
        TabOrder = 0
        object SetCentralPanelFontBitBtn: TBitBtn
          Left = 312
          Top = 64
          Width = 171
          Height = 41
          Caption = #1055#1088#1080#1084#1077#1085#1080#1090#1100
          Default = True
          Enabled = False
          TabOrder = 0
          OnClick = SetCentralPanelFontBitBtnClick
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
        object CategoryPanelFontBtn: TButton
          Left = 16
          Top = 32
          Width = 281
          Height = 25
          Caption = #1064#1088#1080#1092#1090' '#1087#1072#1085#1077#1083#1080' '#1082#1072#1090#1077#1075#1086#1088#1080#1081
          Font.Charset = RUSSIAN_CHARSET
          Font.Color = clWindowText
          Font.Height = -16
          Font.Name = 'Arial'
          Font.Style = []
          ParentFont = False
          TabOrder = 1
          OnClick = CategoryPanelFontBtnClick
        end
        object TimePanelFontBtn: TButton
          Left = 488
          Top = 32
          Width = 281
          Height = 25
          Caption = #1064#1088#1080#1092#1090' '#1087#1072#1085#1077#1083#1080' '#1074#1088#1077#1084#1077#1085#1080
          Font.Charset = RUSSIAN_CHARSET
          Font.Color = clWindowText
          Font.Height = -16
          Font.Name = 'Arial'
          Font.Style = []
          ParentFont = False
          TabOrder = 2
          OnClick = TimePanelFontBtnClick
        end
      end
      object GroupBox8: TGroupBox
        Left = 0
        Top = 120
        Width = 385
        Height = 265
        Caption = #1064#1088#1080#1092#1090' '#1087#1072#1085#1077#1083#1077#1081' '#1089#1083#1077#1074#1072
        Font.Charset = RUSSIAN_CHARSET
        Font.Color = clWindowText
        Font.Height = -16
        Font.Name = 'Arial'
        Font.Style = [fsBold, fsItalic]
        ParentFont = False
        TabOrder = 1
        object SetPlayer2PanelFontBitBtn: TBitBtn
          Left = 8
          Top = 216
          Width = 171
          Height = 41
          Caption = #1055#1088#1080#1084#1077#1085#1080#1090#1100
          Default = True
          Enabled = False
          TabOrder = 0
          OnClick = SetPlayer2PanelFontBitBtnClick
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
        object Player2NamePanelFontBtn: TButton
          Left = 24
          Top = 32
          Width = 337
          Height = 25
          Caption = #1064#1088#1080#1092#1090' '#1080#1084#1077#1085#1080' '#1089#1083#1077#1074#1072
          Font.Charset = RUSSIAN_CHARSET
          Font.Color = clWindowText
          Font.Height = -16
          Font.Name = 'Arial'
          Font.Style = []
          ParentFont = False
          TabOrder = 1
          OnClick = Player2NamePanelFontBtnClick
        end
        object Player2ScoresPanelFontBtn: TButton
          Left = 24
          Top = 72
          Width = 337
          Height = 25
          Caption = #1064#1088#1080#1092#1090' '#1086#1095#1082#1086#1074' '#1089#1083#1077#1074#1072
          Font.Charset = RUSSIAN_CHARSET
          Font.Color = clWindowText
          Font.Height = -16
          Font.Name = 'Arial'
          Font.Style = []
          ParentFont = False
          TabOrder = 2
          OnClick = Player2ScoresPanelFontBtnClick
        end
        object Player2AdvantagePanelFontBtn: TButton
          Left = 24
          Top = 112
          Width = 337
          Height = 25
          Caption = #1064#1088#1080#1092#1090' '#1087#1088#1077#1080#1084#1091#1097#1077#1089#1090#1074' '#1089#1083#1077#1074#1072
          Font.Charset = RUSSIAN_CHARSET
          Font.Color = clWindowText
          Font.Height = -16
          Font.Name = 'Arial'
          Font.Style = []
          ParentFont = False
          TabOrder = 3
          OnClick = Player2AdvantagePanelFontBtnClick
        end
        object Player2PenaltyPanelFontBtn: TButton
          Left = 24
          Top = 152
          Width = 337
          Height = 25
          Caption = #1064#1088#1080#1092#1090' '#1096#1090#1088#1072#1092#1086#1074' '#1089#1083#1077#1074#1072
          Font.Charset = RUSSIAN_CHARSET
          Font.Color = clWindowText
          Font.Height = -16
          Font.Name = 'Arial'
          Font.Style = []
          ParentFont = False
          TabOrder = 4
          OnClick = Player2PenaltyPanelFontBtnClick
        end
      end
      object GroupBox10: TGroupBox
        Left = 400
        Top = 120
        Width = 385
        Height = 265
        Caption = #1064#1088#1080#1092#1090' '#1087#1072#1085#1077#1083#1077#1081' '#1089#1087#1088#1072#1074#1072
        Font.Charset = RUSSIAN_CHARSET
        Font.Color = clWindowText
        Font.Height = -16
        Font.Name = 'Arial'
        Font.Style = [fsBold, fsItalic]
        ParentFont = False
        TabOrder = 2
        object SetPlayer1PanelFontBitBtn: TBitBtn
          Left = 8
          Top = 216
          Width = 171
          Height = 41
          Caption = #1055#1088#1080#1084#1077#1085#1080#1090#1100
          Default = True
          Enabled = False
          TabOrder = 0
          OnClick = SetPlayer1PanelFontBitBtnClick
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
        object Player1NamePanelFontBtn: TButton
          Left = 24
          Top = 32
          Width = 337
          Height = 25
          Caption = #1064#1088#1080#1092#1090' '#1080#1084#1077#1085#1080' '#1089#1087#1088#1072#1074#1072
          Font.Charset = RUSSIAN_CHARSET
          Font.Color = clWindowText
          Font.Height = -16
          Font.Name = 'Arial'
          Font.Style = []
          ParentFont = False
          TabOrder = 1
          OnClick = Player1NamePanelFontBtnClick
        end
        object Player1ScoresPanelFontBtn: TButton
          Left = 24
          Top = 72
          Width = 337
          Height = 25
          Caption = #1064#1088#1080#1092#1090' '#1086#1095#1082#1086#1074' '#1089#1087#1088#1072#1074#1072
          Font.Charset = RUSSIAN_CHARSET
          Font.Color = clWindowText
          Font.Height = -16
          Font.Name = 'Arial'
          Font.Style = []
          ParentFont = False
          TabOrder = 2
          OnClick = Player1ScoresPanelFontBtnClick
        end
        object Player1AdvantagePanelFontBtn: TButton
          Left = 24
          Top = 112
          Width = 337
          Height = 25
          Caption = #1064#1088#1080#1092#1090' '#1087#1088#1077#1080#1084#1091#1097#1077#1089#1090#1074' '#1089#1087#1088#1072#1074#1072
          Font.Charset = RUSSIAN_CHARSET
          Font.Color = clWindowText
          Font.Height = -16
          Font.Name = 'Arial'
          Font.Style = []
          ParentFont = False
          TabOrder = 3
          OnClick = Player1AdvantagePanelFontBtnClick
        end
        object Player1PenaltyPanelFontBtn: TButton
          Left = 24
          Top = 152
          Width = 337
          Height = 25
          Caption = #1064#1088#1080#1092#1090' '#1096#1090#1088#1072#1092#1086#1074' '#1089#1087#1088#1072#1074#1072
          Font.Charset = RUSSIAN_CHARSET
          Font.Color = clWindowText
          Font.Height = -16
          Font.Name = 'Arial'
          Font.Style = []
          ParentFont = False
          TabOrder = 4
          OnClick = Player1PenaltyPanelFontBtnClick
        end
      end
    end
    object PanelsColorTabSheet: TTabSheet
      Caption = #1062#1074#1077#1090' '#1087#1072#1085#1077#1083#1077#1081' '#1090#1072#1073#1083#1086
      ImageIndex = 1
      object GroupBox7: TGroupBox
        Left = 0
        Top = 120
        Width = 385
        Height = 265
        Caption = #1062#1074#1077#1090' '#1087#1072#1085#1077#1083#1077#1081' '#1089#1083#1077#1074#1072
        Font.Charset = RUSSIAN_CHARSET
        Font.Color = clWindowText
        Font.Height = -16
        Font.Name = 'Arial'
        Font.Style = [fsBold, fsItalic]
        ParentFont = False
        TabOrder = 0
        object Label4: TLabel
          Left = 8
          Top = 72
          Width = 146
          Height = 18
          Caption = #1055#1072#1085#1077#1083#1100' '#1086#1095#1082#1086#1074' '#1089#1083#1077#1074#1072
          Font.Charset = RUSSIAN_CHARSET
          Font.Color = clWindowText
          Font.Height = -16
          Font.Name = 'Arial'
          Font.Style = []
          ParentFont = False
        end
        object Label3: TLabel
          Left = 8
          Top = 32
          Width = 148
          Height = 18
          Caption = #1055#1072#1085#1077#1083#1100' '#1080#1084#1077#1085#1080' '#1089#1083#1077#1074#1072
          Font.Charset = RUSSIAN_CHARSET
          Font.Color = clWindowText
          Font.Height = -16
          Font.Name = 'Arial'
          Font.Style = []
          ParentFont = False
        end
        object Label5: TLabel
          Left = 8
          Top = 112
          Width = 200
          Height = 18
          Caption = #1055#1072#1085#1077#1083#1100' '#1087#1088#1077#1080#1084#1091#1097#1077#1089#1090#1074' '#1089#1083#1077#1074#1072
          Font.Charset = RUSSIAN_CHARSET
          Font.Color = clWindowText
          Font.Height = -16
          Font.Name = 'Arial'
          Font.Style = []
          ParentFont = False
        end
        object Label6: TLabel
          Left = 8
          Top = 152
          Width = 171
          Height = 18
          Caption = #1055#1072#1085#1077#1083#1100' '#1096#1090#1088#1072#1092#1086#1074' '#1089#1083#1077#1074#1072
          Font.Charset = RUSSIAN_CHARSET
          Font.Color = clWindowText
          Font.Height = -16
          Font.Name = 'Arial'
          Font.Style = []
          ParentFont = False
        end
        object SetPlayer2PanelColorBitBtn: TBitBtn
          Left = 8
          Top = 216
          Width = 171
          Height = 41
          Caption = #1055#1088#1080#1084#1077#1085#1080#1090#1100
          Default = True
          Enabled = False
          TabOrder = 0
          OnClick = SetPlayer2PanelColorBitBtnClick
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
        object Player2NamePanelColorBox: TColorBox
          Left = 232
          Top = 32
          Width = 145
          Height = 22
          Font.Charset = RUSSIAN_CHARSET
          Font.Color = clWindowText
          Font.Height = -16
          Font.Name = 'Arial'
          Font.Style = []
          ItemHeight = 16
          ParentFont = False
          TabOrder = 1
          OnChange = Player2NamePanelColorBoxChange
        end
        object Player2ScoresPanelColorBox: TColorBox
          Left = 232
          Top = 72
          Width = 145
          Height = 22
          Font.Charset = RUSSIAN_CHARSET
          Font.Color = clWindowText
          Font.Height = -16
          Font.Name = 'Arial'
          Font.Style = []
          ItemHeight = 16
          ParentFont = False
          TabOrder = 2
          OnChange = Player2NamePanelColorBoxChange
        end
        object Player2AdvantagePanelColorBox: TColorBox
          Left = 232
          Top = 112
          Width = 145
          Height = 22
          Font.Charset = RUSSIAN_CHARSET
          Font.Color = clWindowText
          Font.Height = -16
          Font.Name = 'Arial'
          Font.Style = []
          ItemHeight = 16
          ParentFont = False
          TabOrder = 3
          OnChange = Player2NamePanelColorBoxChange
        end
        object Player2PenaltyPanelColorBox: TColorBox
          Left = 232
          Top = 152
          Width = 145
          Height = 22
          Font.Charset = RUSSIAN_CHARSET
          Font.Color = clWindowText
          Font.Height = -16
          Font.Name = 'Arial'
          Font.Style = []
          ItemHeight = 16
          ParentFont = False
          TabOrder = 4
          OnChange = Player2NamePanelColorBoxChange
        end
      end
      object GroupBox9: TGroupBox
        Left = 0
        Top = 0
        Width = 787
        Height = 113
        Align = alTop
        Caption = #1062#1074#1077#1090' '#1094#1077#1085#1090#1088#1072#1083#1100#1085#1099#1093' '#1087#1072#1085#1077#1083#1080
        Font.Charset = RUSSIAN_CHARSET
        Font.Color = clWindowText
        Font.Height = -16
        Font.Name = 'Arial'
        Font.Style = [fsBold, fsItalic]
        ParentFont = False
        TabOrder = 1
        object Label1: TLabel
          Left = 8
          Top = 32
          Width = 129
          Height = 18
          Caption = #1055#1072#1085#1077#1083#1100' '#1082#1072#1090#1077#1075#1086#1088#1080#1080
          Font.Charset = RUSSIAN_CHARSET
          Font.Color = clWindowText
          Font.Height = -16
          Font.Name = 'Arial'
          Font.Style = []
          ParentFont = False
        end
        object Label2: TLabel
          Left = 432
          Top = 32
          Width = 120
          Height = 18
          Caption = #1055#1072#1085#1077#1083#1100' '#1074#1088#1077#1084#1077#1085#1080
          Font.Charset = RUSSIAN_CHARSET
          Font.Color = clWindowText
          Font.Height = -16
          Font.Name = 'Arial'
          Font.Style = []
          ParentFont = False
        end
        object CategoryPanelColorBox: TColorBox
          Left = 144
          Top = 32
          Width = 217
          Height = 22
          Font.Charset = RUSSIAN_CHARSET
          Font.Color = clWindowText
          Font.Height = -16
          Font.Name = 'Arial'
          Font.Style = []
          ItemHeight = 16
          ParentFont = False
          TabOrder = 0
          OnChange = CategoryPanelColorBoxChange
        end
        object TimePanelColorBox: TColorBox
          Left = 560
          Top = 32
          Width = 217
          Height = 22
          Font.Charset = RUSSIAN_CHARSET
          Font.Color = clWindowText
          Font.Height = -16
          Font.Name = 'Arial'
          Font.Style = []
          ItemHeight = 16
          ParentFont = False
          TabOrder = 1
          OnChange = CategoryPanelColorBoxChange
        end
        object SetCentralPanelColorBitBtn: TBitBtn
          Left = 312
          Top = 64
          Width = 171
          Height = 41
          Caption = #1055#1088#1080#1084#1077#1085#1080#1090#1100
          Default = True
          Enabled = False
          TabOrder = 2
          OnClick = SetCentralPanelColorBitBtnClick
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
      object GroupBox5: TGroupBox
        Left = 400
        Top = 120
        Width = 385
        Height = 265
        Caption = #1062#1074#1077#1090' '#1087#1072#1085#1077#1083#1077#1081' '#1089#1087#1088#1072#1074#1072
        Font.Charset = RUSSIAN_CHARSET
        Font.Color = clWindowText
        Font.Height = -16
        Font.Name = 'Arial'
        Font.Style = [fsBold, fsItalic]
        ParentFont = False
        TabOrder = 2
        object Label7: TLabel
          Left = 8
          Top = 32
          Width = 157
          Height = 18
          Caption = #1055#1072#1085#1077#1083#1100' '#1080#1084#1077#1085#1080' '#1089#1087#1088#1072#1074#1072
          Font.Charset = RUSSIAN_CHARSET
          Font.Color = clWindowText
          Font.Height = -16
          Font.Name = 'Arial'
          Font.Style = []
          ParentFont = False
        end
        object Label8: TLabel
          Left = 8
          Top = 72
          Width = 155
          Height = 18
          Caption = #1055#1072#1085#1077#1083#1100' '#1086#1095#1082#1086#1074' '#1089#1087#1088#1072#1074#1072
          Font.Charset = RUSSIAN_CHARSET
          Font.Color = clWindowText
          Font.Height = -16
          Font.Name = 'Arial'
          Font.Style = []
          ParentFont = False
        end
        object Label9: TLabel
          Left = 8
          Top = 112
          Width = 209
          Height = 18
          Caption = #1055#1072#1085#1077#1083#1100' '#1087#1088#1077#1080#1084#1091#1097#1077#1089#1090#1074' '#1089#1087#1088#1072#1074#1072
          Font.Charset = RUSSIAN_CHARSET
          Font.Color = clWindowText
          Font.Height = -16
          Font.Name = 'Arial'
          Font.Style = []
          ParentFont = False
        end
        object Label10: TLabel
          Left = 8
          Top = 152
          Width = 180
          Height = 18
          Caption = #1055#1072#1085#1077#1083#1100' '#1096#1090#1088#1072#1092#1086#1074' '#1089#1087#1088#1072#1074#1072
          Font.Charset = RUSSIAN_CHARSET
          Font.Color = clWindowText
          Font.Height = -16
          Font.Name = 'Arial'
          Font.Style = []
          ParentFont = False
        end
        object SetPlayer1PanelColorBitBtn: TBitBtn
          Left = 8
          Top = 216
          Width = 171
          Height = 41
          Caption = #1055#1088#1080#1084#1077#1085#1080#1090#1100
          Default = True
          Enabled = False
          TabOrder = 0
          OnClick = SetPlayer1PanelColorBitBtnClick
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
        object Player1ScoresPanelColorBox: TColorBox
          Left = 232
          Top = 72
          Width = 145
          Height = 22
          Font.Charset = RUSSIAN_CHARSET
          Font.Color = clWindowText
          Font.Height = -16
          Font.Name = 'Arial'
          Font.Style = []
          ItemHeight = 16
          ParentFont = False
          TabOrder = 1
          OnChange = Player1NamePanelColorBoxChange
        end
        object Player1PenaltyPanelColorBox: TColorBox
          Left = 232
          Top = 152
          Width = 145
          Height = 22
          Font.Charset = RUSSIAN_CHARSET
          Font.Color = clWindowText
          Font.Height = -16
          Font.Name = 'Arial'
          Font.Style = []
          ItemHeight = 16
          ParentFont = False
          TabOrder = 2
          OnChange = Player1NamePanelColorBoxChange
        end
        object Player1AdvantagePanelColorBox: TColorBox
          Left = 232
          Top = 112
          Width = 145
          Height = 22
          Font.Charset = RUSSIAN_CHARSET
          Font.Color = clWindowText
          Font.Height = -16
          Font.Name = 'Arial'
          Font.Style = []
          ItemHeight = 16
          ParentFont = False
          TabOrder = 3
          OnChange = Player1NamePanelColorBoxChange
        end
        object Player1NamePanelColorBox: TColorBox
          Left = 232
          Top = 32
          Width = 145
          Height = 22
          Font.Charset = RUSSIAN_CHARSET
          Font.Color = clWindowText
          Font.Height = -16
          Font.Name = 'Arial'
          Font.Style = []
          ItemHeight = 16
          ParentFont = False
          TabOrder = 4
          OnChange = Player1NamePanelColorBoxChange
        end
      end
    end
    object InfoLabelsSheet: TTabSheet
      Caption = #1055#1086#1076#1087#1080#1089#1080' '#1086#1082#1086#1085
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clWindowText
      Font.Height = -15
      Font.Name = 'Arial'
      Font.Style = [fsBold, fsItalic]
      ParentFont = False
      object GroupBox1: TGroupBox
        Left = 400
        Top = 8
        Width = 385
        Height = 377
        Caption = #1055#1086#1076#1087#1080#1089#1080' '#1086#1082#1086#1085' '#1086#1095#1082#1086#1074' '#1089#1087#1086#1088#1090#1089#1084#1077#1085#1072' '#1089#1087#1088#1072#1074#1072
        Font.Charset = RUSSIAN_CHARSET
        Font.Color = clWindowText
        Font.Height = -16
        Font.Name = 'Arial'
        Font.Style = [fsBold, fsItalic]
        ParentFont = False
        TabOrder = 0
        object Player1ScoresLabelText: TLabeledEdit
          Left = 8
          Top = 64
          Width = 233
          Height = 25
          EditLabel.Width = 99
          EditLabel.Height = 18
          EditLabel.Caption = #1055#1072#1085#1077#1083#1100' '#1086#1095#1082#1086#1074
          EditLabel.Font.Charset = RUSSIAN_CHARSET
          EditLabel.Font.Color = clWindowText
          EditLabel.Font.Height = -16
          EditLabel.Font.Name = 'Arial'
          EditLabel.Font.Style = []
          EditLabel.ParentFont = False
          Font.Charset = RUSSIAN_CHARSET
          Font.Color = clWindowText
          Font.Height = -15
          Font.Name = 'Arial'
          Font.Style = []
          LabelPosition = lpAbove
          LabelSpacing = 3
          ParentFont = False
          TabOrder = 0
          OnChange = Player1ScoresLabelTextChange
        end
        object Player1AdvantageLabelText: TLabeledEdit
          Left = 8
          Top = 136
          Width = 233
          Height = 25
          EditLabel.Width = 153
          EditLabel.Height = 18
          EditLabel.Caption = #1055#1072#1085#1077#1083#1100' '#1087#1088#1077#1080#1084#1091#1097#1077#1089#1090#1074
          EditLabel.Font.Charset = RUSSIAN_CHARSET
          EditLabel.Font.Color = clWindowText
          EditLabel.Font.Height = -16
          EditLabel.Font.Name = 'Arial'
          EditLabel.Font.Style = []
          EditLabel.ParentFont = False
          Font.Charset = RUSSIAN_CHARSET
          Font.Color = clWindowText
          Font.Height = -15
          Font.Name = 'Arial'
          Font.Style = []
          LabelPosition = lpAbove
          LabelSpacing = 3
          ParentFont = False
          TabOrder = 1
          OnChange = Player1ScoresLabelTextChange
        end
        object Player1PenaltyLabelText: TLabeledEdit
          Left = 8
          Top = 208
          Width = 233
          Height = 25
          EditLabel.Width = 124
          EditLabel.Height = 18
          EditLabel.Caption = #1055#1072#1085#1077#1083#1100' '#1096#1090#1088#1072#1092#1086#1074
          EditLabel.Font.Charset = RUSSIAN_CHARSET
          EditLabel.Font.Color = clWindowText
          EditLabel.Font.Height = -16
          EditLabel.Font.Name = 'Arial'
          EditLabel.Font.Style = []
          EditLabel.ParentFont = False
          Font.Charset = RUSSIAN_CHARSET
          Font.Color = clWindowText
          Font.Height = -15
          Font.Name = 'Arial'
          Font.Style = []
          LabelPosition = lpAbove
          LabelSpacing = 3
          ParentFont = False
          TabOrder = 2
          OnChange = Player1ScoresLabelTextChange
        end
        object Player1ScoresLabelsBtn: TBitBtn
          Left = 200
          Top = 328
          Width = 171
          Height = 41
          Caption = #1055#1088#1080#1084#1077#1085#1080#1090#1100
          Default = True
          Enabled = False
          TabOrder = 3
          OnClick = Player1ScoresLabelsBtnClick
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
        object GroupBox4: TGroupBox
          Left = 248
          Top = 40
          Width = 129
          Height = 201
          Caption = #1064#1088#1080#1092#1090#1099
          TabOrder = 4
          object Player1ScoresLabelTextFontBitBtn: TBitBtn
            Left = 8
            Top = 24
            Width = 113
            Height = 25
            Caption = #1054#1095#1082#1080
            Font.Charset = RUSSIAN_CHARSET
            Font.Color = clWindowText
            Font.Height = -15
            Font.Name = 'Arial'
            Font.Style = [fsItalic]
            ParentFont = False
            TabOrder = 0
            OnClick = Player1ScoresLabelTextFontBitBtnClick
          end
          object Player1AdvantageLabelTextFontBitBtn: TBitBtn
            Left = 8
            Top = 96
            Width = 113
            Height = 25
            Caption = #1055#1088#1077#1080#1084#1091#1097#1077#1089#1090#1074#1072
            Font.Charset = RUSSIAN_CHARSET
            Font.Color = clWindowText
            Font.Height = -15
            Font.Name = 'Arial Narrow'
            Font.Style = []
            ParentFont = False
            TabOrder = 1
            OnClick = Player1AdvantageLabelTextFontBitBtnClick
          end
          object Player1PenaltyLabelTextFontBitBtn: TBitBtn
            Left = 8
            Top = 168
            Width = 113
            Height = 25
            Caption = #1064#1090#1088#1072#1092#1099
            Font.Charset = RUSSIAN_CHARSET
            Font.Color = clWindowText
            Font.Height = -15
            Font.Name = 'Arial'
            Font.Style = [fsItalic]
            ParentFont = False
            TabOrder = 2
            OnClick = Player1PenaltyLabelTextFontBitBtnClick
          end
        end
      end
      object GroupBox2: TGroupBox
        Left = 0
        Top = 8
        Width = 385
        Height = 377
        Caption = #1055#1086#1076#1087#1080#1089#1080' '#1086#1082#1086#1085' '#1086#1095#1082#1086#1074' '#1089#1087#1086#1088#1090#1089#1084#1077#1085#1072' '#1089#1083#1077#1074#1072
        Font.Charset = RUSSIAN_CHARSET
        Font.Color = clWindowText
        Font.Height = -16
        Font.Name = 'Arial'
        Font.Style = [fsBold, fsItalic]
        ParentFont = False
        TabOrder = 1
        object Player2PenaltyLabelText: TLabeledEdit
          Left = 8
          Top = 208
          Width = 233
          Height = 25
          EditLabel.Width = 124
          EditLabel.Height = 18
          EditLabel.Caption = #1055#1072#1085#1077#1083#1100' '#1096#1090#1088#1072#1092#1086#1074
          EditLabel.Font.Charset = RUSSIAN_CHARSET
          EditLabel.Font.Color = clWindowText
          EditLabel.Font.Height = -16
          EditLabel.Font.Name = 'Arial'
          EditLabel.Font.Style = []
          EditLabel.ParentFont = False
          Font.Charset = RUSSIAN_CHARSET
          Font.Color = clWindowText
          Font.Height = -15
          Font.Name = 'Arial'
          Font.Style = []
          LabelPosition = lpAbove
          LabelSpacing = 3
          ParentFont = False
          TabOrder = 0
          OnChange = Player2ScoresLabelTextChange
        end
        object Player2AdvantageLabelText: TLabeledEdit
          Left = 8
          Top = 136
          Width = 233
          Height = 25
          EditLabel.Width = 153
          EditLabel.Height = 18
          EditLabel.Caption = #1055#1072#1085#1077#1083#1100' '#1087#1088#1077#1080#1084#1091#1097#1077#1089#1090#1074
          EditLabel.Font.Charset = RUSSIAN_CHARSET
          EditLabel.Font.Color = clWindowText
          EditLabel.Font.Height = -16
          EditLabel.Font.Name = 'Arial'
          EditLabel.Font.Style = []
          EditLabel.ParentFont = False
          Font.Charset = RUSSIAN_CHARSET
          Font.Color = clWindowText
          Font.Height = -15
          Font.Name = 'Arial'
          Font.Style = []
          LabelPosition = lpAbove
          LabelSpacing = 3
          ParentFont = False
          TabOrder = 1
          OnChange = Player2ScoresLabelTextChange
        end
        object Player2ScoresLabelText: TLabeledEdit
          Left = 8
          Top = 64
          Width = 233
          Height = 25
          EditLabel.Width = 99
          EditLabel.Height = 18
          EditLabel.Caption = #1055#1072#1085#1077#1083#1100' '#1086#1095#1082#1086#1074
          EditLabel.Font.Charset = RUSSIAN_CHARSET
          EditLabel.Font.Color = clWindowText
          EditLabel.Font.Height = -16
          EditLabel.Font.Name = 'Arial'
          EditLabel.Font.Style = []
          EditLabel.ParentFont = False
          Font.Charset = RUSSIAN_CHARSET
          Font.Color = clWindowText
          Font.Height = -15
          Font.Name = 'Arial'
          Font.Style = []
          LabelPosition = lpAbove
          LabelSpacing = 3
          ParentFont = False
          TabOrder = 2
          OnChange = Player2ScoresLabelTextChange
        end
        object Player2ScoresLabelsBtn: TBitBtn
          Left = 200
          Top = 328
          Width = 171
          Height = 41
          Caption = #1055#1088#1080#1084#1077#1085#1080#1090#1100
          Default = True
          Enabled = False
          TabOrder = 3
          OnClick = Player2ScoresLabelsBtnClick
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
        object GroupBox3: TGroupBox
          Left = 248
          Top = 40
          Width = 129
          Height = 201
          Caption = #1064#1088#1080#1092#1090#1099
          TabOrder = 4
          object Player2ScoresLabelTextFontBitBtn: TBitBtn
            Left = 8
            Top = 24
            Width = 113
            Height = 25
            Caption = #1054#1095#1082#1080
            Font.Charset = RUSSIAN_CHARSET
            Font.Color = clWindowText
            Font.Height = -15
            Font.Name = 'Arial'
            Font.Style = [fsItalic]
            ParentFont = False
            TabOrder = 0
            OnClick = Player2ScoresLabelTextFontBitBtnClick
          end
          object Player2AdvantageLabelTextFontBitBtn: TBitBtn
            Left = 8
            Top = 96
            Width = 113
            Height = 25
            Caption = #1055#1088#1077#1080#1084#1091#1097#1077#1089#1090#1074#1072
            Font.Charset = RUSSIAN_CHARSET
            Font.Color = clWindowText
            Font.Height = -15
            Font.Name = 'Arial Narrow'
            Font.Style = []
            ParentFont = False
            TabOrder = 1
            OnClick = Player2AdvantageLabelTextFontBitBtnClick
          end
          object Player2PenaltyLabelTextFontBitBtn: TBitBtn
            Left = 8
            Top = 168
            Width = 113
            Height = 25
            Caption = #1064#1090#1088#1072#1092#1099
            Font.Charset = RUSSIAN_CHARSET
            Font.Color = clWindowText
            Font.Height = -15
            Font.Name = 'Arial'
            Font.Style = [fsItalic]
            ParentFont = False
            TabOrder = 2
            OnClick = Player2PenaltyLabelTextFontBitBtnClick
          end
        end
      end
    end
    object PictureSelectTab: TTabSheet
      Caption = #1053#1072#1089#1090#1088#1086#1081#1082#1080' '#1083#1086#1075#1086#1090#1080#1087#1086#1074
      ImageIndex = 3
      object Image1: TImage
        Left = 32
        Top = 32
        Width = 129
        Height = 129
        Stretch = True
      end
      object Image2: TImage
        Left = 32
        Top = 232
        Width = 129
        Height = 129
        Stretch = True
      end
      object Picture1Edit: TLabeledEdit
        Left = 176
        Top = 80
        Width = 513
        Height = 28
        EditLabel.Width = 130
        EditLabel.Height = 18
        EditLabel.Caption = #1042#1077#1088#1093#1085#1103#1103' '#1082#1072#1088#1090#1080#1085#1082#1072
        EditLabel.Font.Charset = RUSSIAN_CHARSET
        EditLabel.Font.Color = clWindowText
        EditLabel.Font.Height = -16
        EditLabel.Font.Name = 'Arial'
        EditLabel.Font.Style = []
        EditLabel.ParentFont = False
        Font.Charset = ANSI_CHARSET
        Font.Color = clWindowText
        Font.Height = -16
        Font.Name = 'Arial Narrow'
        Font.Style = []
        LabelPosition = lpAbove
        LabelSpacing = 3
        ParentFont = False
        TabOrder = 0
        OnChange = Picture1EditChange
      end
      object Picture2Edit: TLabeledEdit
        Left = 176
        Top = 280
        Width = 513
        Height = 28
        EditLabel.Width = 123
        EditLabel.Height = 18
        EditLabel.Caption = #1053#1080#1078#1085#1103#1103' '#1082#1072#1088#1090#1080#1085#1082#1072
        EditLabel.Font.Charset = RUSSIAN_CHARSET
        EditLabel.Font.Color = clWindowText
        EditLabel.Font.Height = -16
        EditLabel.Font.Name = 'Arial'
        EditLabel.Font.Style = []
        EditLabel.ParentFont = False
        Font.Charset = ANSI_CHARSET
        Font.Color = clWindowText
        Font.Height = -16
        Font.Name = 'Arial Narrow'
        Font.Style = []
        LabelPosition = lpAbove
        LabelSpacing = 3
        ParentFont = False
        TabOrder = 1
        OnChange = Picture2EditChange
      end
      object Picture1BitBtn: TBitBtn
        Left = 704
        Top = 80
        Width = 49
        Height = 28
        Caption = '. . .'
        Font.Charset = RUSSIAN_CHARSET
        Font.Color = clWindowText
        Font.Height = -19
        Font.Name = 'Arial'
        Font.Style = [fsBold]
        ParentFont = False
        TabOrder = 2
        OnClick = Picture1BitBtnClick
      end
      object Picture2BitBtn: TBitBtn
        Left = 704
        Top = 280
        Width = 49
        Height = 28
        Caption = '. . .'
        Font.Charset = RUSSIAN_CHARSET
        Font.Color = clWindowText
        Font.Height = -19
        Font.Name = 'Arial'
        Font.Style = [fsBold]
        ParentFont = False
        TabOrder = 3
        OnClick = Picture2BitBtnClick
      end
      object SetPicture1BitBtn: TBitBtn
        Left = 176
        Top = 120
        Width = 171
        Height = 41
        Caption = #1055#1088#1080#1084#1077#1085#1080#1090#1100
        Default = True
        Enabled = False
        TabOrder = 4
        OnClick = SetPicture1BitBtnClick
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
      object SetPicture2BitBtn: TBitBtn
        Left = 176
        Top = 320
        Width = 171
        Height = 41
        Caption = #1055#1088#1080#1084#1077#1085#1080#1090#1100
        Default = True
        Enabled = False
        TabOrder = 5
        OnClick = SetPicture2BitBtnClick
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
  end
  object BitBtn1: TBitBtn
    Left = 504
    Top = 440
    Width = 281
    Height = 25
    TabOrder = 1
    OnClick = BitBtn1Click
    Kind = bkAll
  end
  object BitBtn2: TBitBtn
    Left = 504
    Top = 480
    Width = 281
    Height = 25
    Caption = #1054#1090#1084#1077#1085#1072
    TabOrder = 2
    OnClick = BitBtn2Click
    Kind = bkAbort
  end
  object ChangeLogMemo: TMemo
    Left = 16
    Top = 438
    Width = 441
    Height = 107
    Align = alCustom
    Lines.Strings = (
      #1047#1072#1087#1080#1089#1099#1074#1072#1090#1100' '#1089#1102#1076#1072' '#1074#1089#1077' '#1080#1079#1084#1077#1085#1077#1085#1080#1103', '#1082#1086#1090#1088#1099#1077' '#1073#1099#1083#1080' '#1087#1086#1076#1090#1074#1077#1088#1078#1076#1077#1085#1099' '#1082#1085#1086#1087#1082#1086#1081' '
      '"'#1087#1088#1080#1084#1077#1085#1080#1090#1100'"')
    ParentColor = True
    ReadOnly = True
    ScrollBars = ssVertical
    TabOrder = 3
  end
  object ResetToDefaultBitBtn: TBitBtn
    Left = 504
    Top = 520
    Width = 281
    Height = 25
    Caption = 'ResetToDefaultBitBtn'
    TabOrder = 4
    OnClick = ResetToDefaultBitBtnClick
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
  object Player1ScoresLabelTextFontDialog: TFontDialog
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    MinFontSize = 0
    MaxFontSize = 0
    Left = 760
    Top = 464
  end
  object Player1AdvantageLabelTextFontDialog: TFontDialog
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    MinFontSize = 0
    MaxFontSize = 0
    Left = 760
    Top = 496
  end
  object Player1PenaltyLabelTextFontDialog: TFontDialog
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    MinFontSize = 0
    MaxFontSize = 0
    Left = 760
    Top = 528
  end
  object Player2ScoresLabelTextFontDialog: TFontDialog
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    MinFontSize = 0
    MaxFontSize = 0
    Left = 16
    Top = 504
  end
  object Player2AdvantageLabelTextFontDialog: TFontDialog
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    MinFontSize = 0
    MaxFontSize = 0
    Left = 72
    Top = 496
  end
  object Player2PenaltyLabelTextFontDialog: TFontDialog
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    MinFontSize = 0
    MaxFontSize = 0
    Left = 40
    Top = 528
  end
  object Player2NamePanelFontDialog: TFontDialog
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    MinFontSize = 0
    MaxFontSize = 0
    Left = 352
    Top = 456
  end
  object Player1NamePanelFontDialog: TFontDialog
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    MinFontSize = 0
    MaxFontSize = 0
    Left = 352
    Top = 488
  end
  object CategoryPanelFontDialog: TFontDialog
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    MinFontSize = 0
    MaxFontSize = 0
    Left = 384
    Top = 424
  end
  object Player2ScoresPanelFontDialog: TFontDialog
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    MinFontSize = 0
    MaxFontSize = 0
    Left = 384
    Top = 456
  end
  object Player1AdvantagePanelFontDialog: TFontDialog
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    MinFontSize = 0
    MaxFontSize = 0
    Left = 416
    Top = 488
  end
  object Player2AdvantagePanelFontDialog: TFontDialog
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    MinFontSize = 0
    MaxFontSize = 0
    Left = 416
    Top = 456
  end
  object TimePanelFontDialog: TFontDialog
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    MinFontSize = 0
    MaxFontSize = 0
    Left = 416
    Top = 424
  end
  object Player2PenaltyPanelFontDialog: TFontDialog
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    MinFontSize = 0
    MaxFontSize = 0
    Left = 448
    Top = 456
  end
  object Player1PenaltyPanelFontDialog: TFontDialog
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    MinFontSize = 0
    MaxFontSize = 0
    Left = 448
    Top = 488
  end
  object Player1ScoresPanelFontDialog: TFontDialog
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    MinFontSize = 0
    MaxFontSize = 0
    Left = 384
    Top = 488
  end
  object OpenPictureDialog: TOpenPictureDialog
    Filter = 
      'All (*.jpg;*.jpeg;*.bmp;*.ico;*.emf;*.wmf)|*.jpg;*.jpeg;*.bmp;*.' +
      'ico;*.emf;*.wmf|JPEG Image File (*.jpg)|*.jpg|JPEG Image File (*' +
      '.jpeg)|*.jpeg|Bitmaps (*.bmp)|*.bmp|Icons (*.ico)|*.ico|Enhanced' +
      ' Metafiles (*.emf)|*.emf|Metafiles (*.wmf)|*.wmf|PNG files (*.pn' +
      'g)|*.png'
    Title = #1042#1099#1073#1077#1088#1080#1090#1077' '#1082#1072#1088#1090#1080#1085#1082#1091' '#1076#1083#1103' '#1086#1090#1086#1073#1088#1072#1078#1077#1085#1080#1103' '#1085#1072' '#1076#1080#1089#1087#1083#1077#1077
    Left = 224
    Top = 472
  end
end
