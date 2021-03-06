object DisplayForm: TDisplayForm
  Left = 252
  Top = 314
  Width = 1360
  Height = 768
  BorderIcons = [biMinimize, biMaximize]
  BorderWidth = 10
  Caption = #1062#1080#1092#1088#1086#1074#1086#1077' '#1090#1072#1073#1083#1086
  Color = clWhite
  DefaultMonitor = dmDesktop
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
  object TopPanel: TPanel
    Left = 0
    Top = 0
    Width = 1324
    Height = 209
    Align = alTop
    BevelOuter = bvNone
    Caption = 'TopPanel'
    Color = clWhite
    TabOrder = 0
    object Player1Label: TLabel
      Left = 0
      Top = 57
      Width = 521
      Height = 152
      Align = alLeft
      Alignment = taCenter
      AutoSize = False
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
      Left = 793
      Top = 57
      Width = 531
      Height = 152
      Align = alRight
      Alignment = taCenter
      AutoSize = False
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
      Left = 521
      Top = 57
      Width = 272
      Height = 152
      Align = alClient
      BevelOuter = bvNone
      BorderWidth = 5
      Caption = '00:00'
      Color = clWhite
      Font.Charset = ANSI_CHARSET
      Font.Color = clWindowText
      Font.Height = -153
      Font.Name = 'Comic Sans MS'
      Font.Style = [fsBold]
      ParentFont = False
      TabOrder = 0
    end
    object CategoryPanel: TPanel
      Left = 0
      Top = 0
      Width = 1324
      Height = 57
      Align = alTop
      BevelOuter = bvNone
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
    Width = 513
    Height = 501
    Align = alLeft
    BevelOuter = bvNone
    Caption = 'LeftPanel'
    Color = clWhite
    TabOrder = 1
    object Player1Scores: TPanel
      Left = 0
      Top = 0
      Width = 513
      Height = 305
      Align = alTop
      BevelOuter = bvNone
      Caption = 'Player1Scores'
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clWindowText
      Font.Height = -96
      Font.Name = 'Arial'
      Font.Style = [fsBold]
      ParentFont = False
      TabOrder = 0
      object Player1ScoresLabel: TLabel
        Left = 0
        Top = 0
        Width = 513
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
      Left = 208
      Top = 305
      Width = 305
      Height = 196
      Align = alRight
      BevelOuter = bvNone
      Caption = 'Player1Advantage'
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clWindowText
      Font.Height = -96
      Font.Name = 'Arial'
      Font.Style = [fsBold]
      ParentFont = False
      TabOrder = 1
      object Player1AdvantageLabel: TLabel
        Left = 0
        Top = 0
        Width = 305
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
      Left = 0
      Top = 305
      Width = 208
      Height = 196
      Align = alClient
      BevelOuter = bvNone
      Caption = 'Player1Penalty'
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clWindowText
      Font.Height = -96
      Font.Name = 'Arial'
      Font.Style = [fsBold]
      ParentFont = False
      TabOrder = 2
      object Player1PenaltyLabel: TLabel
        Left = 0
        Top = 0
        Width = 208
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
    Left = 851
    Top = 209
    Width = 473
    Height = 501
    Align = alRight
    BevelOuter = bvNone
    Caption = 'RightPanel'
    Color = clWhite
    TabOrder = 2
    object Player2Scores: TPanel
      Left = 0
      Top = 0
      Width = 473
      Height = 305
      Align = alTop
      BevelOuter = bvNone
      Caption = 'Player2Scores'
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clWindowText
      Font.Height = -96
      Font.Name = 'Arial'
      Font.Style = [fsBold]
      ParentFont = False
      TabOrder = 0
      object Player2ScoresLabel: TLabel
        Left = 0
        Top = 0
        Width = 473
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
      Height = 196
      Align = alLeft
      BevelOuter = bvNone
      Caption = 'Player2Advantage'
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clWindowText
      Font.Height = -96
      Font.Name = 'Arial'
      Font.Style = [fsBold]
      ParentFont = False
      TabOrder = 1
      object Player2AdvantageLabel: TLabel
        Left = 0
        Top = 0
        Width = 297
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
      Width = 176
      Height = 196
      Align = alClient
      BevelOuter = bvNone
      Caption = 'Player2Penalty'
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clWindowText
      Font.Height = -96
      Font.Name = 'Arial'
      Font.Style = [fsBold]
      ParentFont = False
      TabOrder = 2
      object Player2PenaltyLabel: TLabel
        Left = 0
        Top = 0
        Width = 176
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
    Left = 513
    Top = 209
    Width = 338
    Height = 501
    Align = alClient
    BevelOuter = bvNone
    Color = clWhite
    TabOrder = 3
    object CentralTopPanel: TPanel
      Left = 0
      Top = 0
      Width = 338
      Height = 217
      Align = alTop
      BevelOuter = bvNone
      Caption = 'CentralTopPanel'
      TabOrder = 0
      object Image1: TImage
        Left = 0
        Top = 0
        Width = 338
        Height = 217
        Align = alClient
        Stretch = True
      end
    end
    object CentralBottomPanel: TPanel
      Left = 0
      Top = 207
      Width = 338
      Height = 294
      Align = alBottom
      BevelOuter = bvNone
      Caption = 'CentralBottomPanel'
      TabOrder = 1
      object Image2: TImage
        Left = 0
        Top = 0
        Width = 338
        Height = 294
        Align = alClient
        Stretch = True
      end
    end
  end
end
