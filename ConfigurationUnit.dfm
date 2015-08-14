object ConfigurationForm: TConfigurationForm
  Left = 459
  Top = 119
  Width = 811
  Height = 595
  Caption = 'ConfigurationForm'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object PageControl1: TPageControl
    Left = 0
    Top = 0
    Width = 795
    Height = 503
    ActivePage = InfoLabelsSheet
    Align = alTop
    TabIndex = 0
    TabOrder = 0
    object InfoLabelsSheet: TTabSheet
      Caption = 'InfoLabelsSheet'
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
        Caption = #1055#1086#1076#1087#1080#1089#1080' '#1086#1082#1086#1085' '#1089#1087#1086#1088#1090#1089#1084#1077#1085#1072' '#1089#1087#1088#1072#1074#1072
        TabOrder = 0
        object Player1ScoresLabelText: TLabeledEdit
          Left = 8
          Top = 64
          Width = 233
          Height = 25
          EditLabel.Width = 168
          EditLabel.Height = 17
          EditLabel.Caption = 'Player1ScoresLabelText'
          LabelPosition = lpAbove
          LabelSpacing = 3
          TabOrder = 0
          OnChange = Player1ScoresLabelTextChange
        end
        object Player1AdvantageLabelText: TLabeledEdit
          Left = 8
          Top = 136
          Width = 233
          Height = 25
          EditLabel.Width = 194
          EditLabel.Height = 17
          EditLabel.Caption = 'Player1AdvantageLabelText'
          LabelPosition = lpAbove
          LabelSpacing = 3
          TabOrder = 1
          OnChange = Player1ScoresLabelTextChange
        end
        object Player1PenaltyLabelText: TLabeledEdit
          Left = 8
          Top = 208
          Width = 233
          Height = 25
          EditLabel.Width = 171
          EditLabel.Height = 17
          EditLabel.Caption = 'Player1PenaltyLabelText'
          LabelPosition = lpAbove
          LabelSpacing = 3
          TabOrder = 2
          OnChange = Player1ScoresLabelTextChange
        end
        object Player1ScoresLabelTextFontBitBtn: TBitBtn
          Left = 256
          Top = 64
          Width = 113
          Height = 25
          Caption = 'Player1ScoresLabelTextFontBitBtn'
          TabOrder = 3
        end
        object Player1AdvantageLabelTextFontBitBtn: TBitBtn
          Left = 256
          Top = 136
          Width = 113
          Height = 25
          Caption = 'Player1AdvantageLabelTextFontBitBtn'
          TabOrder = 4
        end
        object Player1PenaltyLabelTextFontBitBtn: TBitBtn
          Left = 256
          Top = 208
          Width = 113
          Height = 25
          Caption = 'Player1PenaltyLabelTextFontBitBtn'
          TabOrder = 5
        end
        object Player1ScoresLabelsBtn: TBitBtn
          Left = 280
          Top = 328
          Width = 91
          Height = 41
          Caption = 'OK'
          Default = True
          ModalResult = 1
          TabOrder = 6
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
      object GroupBox2: TGroupBox
        Left = 0
        Top = 8
        Width = 385
        Height = 377
        Caption = #1055#1086#1076#1087#1080#1089#1080' '#1086#1082#1086#1085' '#1089#1087#1086#1088#1090#1089#1084#1077#1085#1072' '#1089#1083#1077#1074#1072
        TabOrder = 1
        object Player2PenaltyLabelText: TLabeledEdit
          Left = 8
          Top = 208
          Width = 233
          Height = 25
          EditLabel.Width = 171
          EditLabel.Height = 17
          EditLabel.Caption = 'Player2PenaltyLabelText'
          LabelPosition = lpAbove
          LabelSpacing = 3
          TabOrder = 0
          OnChange = Player2ScoresLabelTextChange
        end
        object Player2AdvantageLabelText: TLabeledEdit
          Left = 8
          Top = 136
          Width = 233
          Height = 25
          EditLabel.Width = 194
          EditLabel.Height = 17
          EditLabel.Caption = 'Player2AdvantageLabelText'
          LabelPosition = lpAbove
          LabelSpacing = 3
          TabOrder = 1
          OnChange = Player2ScoresLabelTextChange
        end
        object Player2ScoresLabelText: TLabeledEdit
          Left = 8
          Top = 64
          Width = 233
          Height = 25
          EditLabel.Width = 168
          EditLabel.Height = 17
          EditLabel.Caption = 'Player2ScoresLabelText'
          LabelPosition = lpAbove
          LabelSpacing = 3
          TabOrder = 2
          OnChange = Player2ScoresLabelTextChange
        end
        object Player2ScoresLabelTextFontBitBtn: TBitBtn
          Left = 256
          Top = 64
          Width = 113
          Height = 25
          Caption = 'Player2ScoresLabelTextFontBitBtn'
          TabOrder = 3
          OnClick = Player2ScoresLabelTextFontBitBtnClick
        end
        object Player2AdvantageLabelTextFontBitBtn: TBitBtn
          Left = 256
          Top = 136
          Width = 113
          Height = 25
          Caption = 'Player2AdvantageLabelTextFontBitBtn'
          TabOrder = 4
          OnClick = Player2AdvantageLabelTextFontBitBtnClick
        end
        object Player2PenaltyLabelTextFontBitBtn: TBitBtn
          Left = 256
          Top = 208
          Width = 113
          Height = 25
          Caption = 'Player2PenaltyLabelTextFontBitBtn'
          TabOrder = 5
          OnClick = Player2PenaltyLabelTextFontBitBtnClick
        end
        object Player2ScoresLabelsBtn: TBitBtn
          Left = 280
          Top = 328
          Width = 91
          Height = 41
          Caption = 'OK'
          Default = True
          ModalResult = 1
          TabOrder = 6
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
    object TabSheet2: TTabSheet
      Caption = 'TabSheet2'
      ImageIndex = 1
    end
    object TabSheet3: TTabSheet
      Caption = 'TabSheet3'
      ImageIndex = 2
    end
  end
  object BitBtn1: TBitBtn
    Left = 344
    Top = 520
    Width = 139
    Height = 25
    TabOrder = 1
    OnClick = BitBtn1Click
    Kind = bkAll
  end
  object BitBtn2: TBitBtn
    Left = 496
    Top = 520
    Width = 105
    Height = 25
    Caption = #1054#1090#1084#1077#1085#1072
    TabOrder = 2
    Kind = bkAbort
  end
  object Player1ScoresLabelTextFontDialog: TFontDialog
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    MinFontSize = 0
    MaxFontSize = 0
    Left = 704
    Top = 504
  end
  object Player1AdvantageLabelTextFontDialog: TFontDialog
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    MinFontSize = 0
    MaxFontSize = 0
    Left = 736
    Top = 504
  end
  object Player1PenaltyLabelTextFontDialog: TFontDialog
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    MinFontSize = 0
    MaxFontSize = 0
    Left = 768
    Top = 504
  end
  object Player2ScoresLabelTextFontDialog: TFontDialog
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    MinFontSize = 0
    MaxFontSize = 0
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
    Left = 32
    Top = 504
  end
  object Player2PenaltyLabelTextFontDialog: TFontDialog
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    MinFontSize = 0
    MaxFontSize = 0
    Left = 64
    Top = 504
  end
end
