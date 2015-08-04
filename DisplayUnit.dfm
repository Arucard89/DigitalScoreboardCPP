object DisplayForm: TDisplayForm
  Left = 174
  Top = 81
  Width = 1738
  Height = 950
  BorderWidth = 10
  Caption = 'DisplayForm'
  Color = clWhite
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  OnResize = FormResize
  PixelsPerInch = 96
  TextHeight = 13
  object TopPanel: TPanel
    Left = 0
    Top = 0
    Width = 1722
    Height = 209
    Align = alTop
    BevelOuter = bvNone
    Caption = 'TopPanel'
    Color = clWhite
    TabOrder = 0
    object Player1Label: TLabel
      Left = 0
      Top = 57
      Width = 617
      Height = 152
      Align = alLeft
      Alignment = taCenter
      AutoSize = False
      Caption = 'Player1Label'
      Color = clSkyBlue
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clWindowText
      Font.Height = -64
      Font.Name = 'Arial'
      Font.Style = [fsBold, fsItalic]
      ParentColor = False
      ParentFont = False
      Layout = tlCenter
      WordWrap = True
    end
    object Player2Label: TLabel
      Left = 1103
      Top = 57
      Width = 619
      Height = 152
      Align = alRight
      Alignment = taCenter
      AutoSize = False
      Caption = 'Player2Label'
      Color = clSkyBlue
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clWindowText
      Font.Height = -64
      Font.Name = 'Arial'
      Font.Style = [fsBold, fsItalic]
      ParentColor = False
      ParentFont = False
      Layout = tlCenter
      WordWrap = True
    end
    object TimePanel: TPanel
      Left = 617
      Top = 57
      Width = 486
      Height = 152
      Align = alClient
      BevelOuter = bvNone
      BorderWidth = 5
      Caption = '00:00'
      Color = clWhite
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clWindowText
      Font.Height = -153
      Font.Name = 'Arial'
      Font.Style = [fsBold]
      ParentFont = False
      TabOrder = 0
    end
    object CategoryPanel: TPanel
      Left = 0
      Top = 0
      Width = 1722
      Height = 57
      Align = alTop
      Caption = 'CategoryPanel'
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clWindowText
      Font.Height = -48
      Font.Name = 'Arial'
      Font.Style = [fsBold]
      ParentFont = False
      TabOrder = 1
    end
  end
  object LeftPanel: TPanel
    Left = 0
    Top = 209
    Width = 689
    Height = 703
    Align = alLeft
    BevelOuter = bvNone
    Caption = 'LeftPanel'
    Color = clWhite
    TabOrder = 1
    object Player1Scores: TPanel
      Left = 0
      Top = 0
      Width = 689
      Height = 305
      Align = alTop
      Caption = 'Player1Scores'
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clWindowText
      Font.Height = -96
      Font.Name = 'Arial'
      Font.Style = [fsBold]
      ParentFont = False
      TabOrder = 0
      object Player1ScoresLabel: TLabel
        Left = 1
        Top = 1
        Width = 687
        Height = 32
        Align = alTop
        Caption = 'Player1ScoresLabel'
        Font.Charset = RUSSIAN_CHARSET
        Font.Color = clWindowText
        Font.Height = -27
        Font.Name = 'Arial'
        Font.Style = [fsBold]
        ParentFont = False
      end
    end
    object Player1Advantage: TPanel
      Left = 0
      Top = 305
      Width = 305
      Height = 398
      Align = alLeft
      Caption = 'Player1Advantage'
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clWindowText
      Font.Height = -96
      Font.Name = 'Arial'
      Font.Style = [fsBold]
      ParentFont = False
      TabOrder = 1
      object Player1AdvantageLabel: TLabel
        Left = 1
        Top = 1
        Width = 303
        Height = 32
        Align = alTop
        Caption = 'Player1AdvantageLabel'
        Font.Charset = RUSSIAN_CHARSET
        Font.Color = clWindowText
        Font.Height = -27
        Font.Name = 'Arial'
        Font.Style = [fsBold]
        ParentFont = False
      end
    end
    object Player1Penalty: TPanel
      Left = 305
      Top = 305
      Width = 384
      Height = 398
      Align = alClient
      Caption = 'Player1Penalty'
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clWindowText
      Font.Height = -96
      Font.Name = 'Arial'
      Font.Style = [fsBold]
      ParentFont = False
      TabOrder = 2
      object Player1PenaltyLabel: TLabel
        Left = 1
        Top = 1
        Width = 382
        Height = 32
        Align = alTop
        Caption = 'Player1PenaltyLabel'
        Font.Charset = RUSSIAN_CHARSET
        Font.Color = clWindowText
        Font.Height = -27
        Font.Name = 'Arial'
        Font.Style = [fsBold]
        ParentFont = False
      end
    end
  end
  object RightPanel: TPanel
    Left = 1071
    Top = 209
    Width = 651
    Height = 703
    Align = alRight
    BevelOuter = bvNone
    Caption = 'RightPanel'
    Color = clWhite
    TabOrder = 2
    object Player2Scores: TPanel
      Left = 0
      Top = 0
      Width = 651
      Height = 305
      Align = alTop
      Caption = 'Player2Scores'
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clWindowText
      Font.Height = -96
      Font.Name = 'Arial'
      Font.Style = [fsBold]
      ParentFont = False
      TabOrder = 0
      object Player2ScoresLabel: TLabel
        Left = 1
        Top = 1
        Width = 649
        Height = 32
        Align = alTop
        Alignment = taRightJustify
        Caption = 'Player2ScoresLabel'
        Font.Charset = RUSSIAN_CHARSET
        Font.Color = clWindowText
        Font.Height = -27
        Font.Name = 'Arial'
        Font.Style = [fsBold]
        ParentFont = False
      end
    end
    object Player2Advantage: TPanel
      Left = 0
      Top = 305
      Width = 297
      Height = 398
      Align = alLeft
      Caption = 'Player2Advantage'
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clWindowText
      Font.Height = -96
      Font.Name = 'Arial'
      Font.Style = [fsBold]
      ParentFont = False
      TabOrder = 1
      object Player2AdvantageLabel: TLabel
        Left = 1
        Top = 1
        Width = 295
        Height = 32
        Align = alTop
        Alignment = taRightJustify
        Caption = 'Player2AdvantageLabel'
        Font.Charset = RUSSIAN_CHARSET
        Font.Color = clWindowText
        Font.Height = -27
        Font.Name = 'Arial'
        Font.Style = [fsBold]
        ParentFont = False
      end
    end
    object Player2Penalty: TPanel
      Left = 297
      Top = 305
      Width = 354
      Height = 398
      Align = alClient
      Caption = 'Player2Penalty'
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clWindowText
      Font.Height = -96
      Font.Name = 'Arial'
      Font.Style = [fsBold]
      ParentFont = False
      TabOrder = 2
      object Player2PenaltyLabel: TLabel
        Left = 1
        Top = 1
        Width = 352
        Height = 32
        Align = alTop
        Alignment = taRightJustify
        Caption = 'Player2PenaltyLabel'
        Font.Charset = RUSSIAN_CHARSET
        Font.Color = clWindowText
        Font.Height = -27
        Font.Name = 'Arial'
        Font.Style = [fsBold]
        ParentFont = False
      end
    end
  end
  object CentralPanel: TPanel
    Left = 689
    Top = 209
    Width = 382
    Height = 703
    Align = alClient
    BevelOuter = bvNone
    Caption = 'CentralPanel'
    Color = clWhite
    TabOrder = 3
    object CentralTopPanel: TPanel
      Left = 0
      Top = 0
      Width = 382
      Height = 280
      Align = alTop
      BevelInner = bvLowered
      Caption = 'CentralTopPanel'
      TabOrder = 0
    end
    object CentralBottomPanel: TPanel
      Left = 0
      Top = 409
      Width = 382
      Height = 294
      Align = alBottom
      BevelInner = bvLowered
      Caption = 'CentralBottomPanel'
      TabOrder = 1
    end
  end
end