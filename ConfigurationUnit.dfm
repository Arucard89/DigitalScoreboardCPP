object ConfigurationForm: TConfigurationForm
  Left = 578
  Top = 153
  Width = 917
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
    Width = 901
    Height = 503
    ActivePage = InfoLabelsSheet
    Align = alTop
    TabIndex = 0
    TabOrder = 0
    object InfoLabelsSheet: TTabSheet
      Caption = 'InfoLabelsSheet'
      object Player2AdvantageLabelText: TLabeledEdit
        Left = 320
        Top = 88
        Width = 217
        Height = 21
        EditLabel.Width = 134
        EditLabel.Height = 13
        EditLabel.Caption = 'Player2AdvantageLabelText'
        LabelPosition = lpAbove
        LabelSpacing = 3
        TabOrder = 0
        OnChange = Player1ScoresLabelTextChange
      end
      object Player1ScoresLabelText: TLabeledEdit
        Left = 24
        Top = 32
        Width = 217
        Height = 21
        EditLabel.Width = 115
        EditLabel.Height = 13
        EditLabel.Caption = 'Player1ScoresLabelText'
        LabelPosition = lpAbove
        LabelSpacing = 3
        TabOrder = 1
        OnChange = Player1ScoresLabelTextChange
      end
      object Player1AdvantageLabelText: TLabeledEdit
        Left = 24
        Top = 88
        Width = 217
        Height = 21
        EditLabel.Width = 134
        EditLabel.Height = 13
        EditLabel.Caption = 'Player1AdvantageLabelText'
        LabelPosition = lpAbove
        LabelSpacing = 3
        TabOrder = 2
        OnChange = Player1ScoresLabelTextChange
      end
      object Player1PenaltyLabelText: TLabeledEdit
        Left = 24
        Top = 144
        Width = 217
        Height = 21
        EditLabel.Width = 117
        EditLabel.Height = 13
        EditLabel.Caption = 'Player1PenaltyLabelText'
        LabelPosition = lpAbove
        LabelSpacing = 3
        TabOrder = 3
        OnChange = Player1ScoresLabelTextChange
      end
      object Player2PenaltyLabelText: TLabeledEdit
        Left = 320
        Top = 144
        Width = 217
        Height = 21
        EditLabel.Width = 117
        EditLabel.Height = 13
        EditLabel.Caption = 'Player2PenaltyLabelText'
        LabelPosition = lpAbove
        LabelSpacing = 3
        TabOrder = 4
        OnChange = Player1ScoresLabelTextChange
      end
      object Player2ScoresLabelText: TLabeledEdit
        Left = 320
        Top = 32
        Width = 217
        Height = 21
        EditLabel.Width = 115
        EditLabel.Height = 13
        EditLabel.Caption = 'Player2ScoresLabelText'
        LabelPosition = lpAbove
        LabelSpacing = 3
        TabOrder = 5
        OnChange = Player1ScoresLabelTextChange
      end
      object BitBtn3: TBitBtn
        Left = 24
        Top = 184
        Width = 75
        Height = 25
        Caption = 'BitBtn3'
        TabOrder = 6
        OnClick = BitBtn3Click
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
    Left = 600
    Top = 520
    Width = 139
    Height = 25
    Caption = #1055#1088#1080#1085#1103#1090#1100' '#1080#1079#1084#1077#1085#1077#1085#1080#1103
    TabOrder = 1
    OnClick = BitBtn1Click
    Kind = bkOK
  end
  object BitBtn2: TBitBtn
    Left = 784
    Top = 520
    Width = 105
    Height = 25
    Caption = #1054#1090#1084#1077#1085#1072
    TabOrder = 2
    Kind = bkAbort
  end
  object FontDialog1: TFontDialog
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    MinFontSize = 0
    MaxFontSize = 0
    Left = 584
    Top = 176
  end
end
