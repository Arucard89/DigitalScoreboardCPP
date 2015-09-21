object FightResultForm: TFightResultForm
  Left = 432
  Top = 418
  BorderStyle = bsToolWindow
  Caption = 'FightResultForm'
  ClientHeight = 257
  ClientWidth = 764
  Color = clSilver
  DefaultMonitor = dmMainForm
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 24
    Top = 8
    Width = 125
    Height = 23
    Caption = #1055#1086#1073#1077#1076#1080#1090#1077#1083#1100
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'Arial'
    Font.Style = [fsBold, fsItalic]
    ParentFont = False
  end
  object Label2: TLabel
    Left = 24
    Top = 104
    Width = 153
    Height = 23
    Caption = #1057#1087#1086#1089#1086#1073' '#1087#1086#1073#1077#1076#1099
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'Arial'
    Font.Style = [fsBold, fsItalic]
    ParentFont = False
  end
  object WinnerBox: TComboBox
    Left = 24
    Top = 40
    Width = 713
    Height = 30
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'Arial'
    Font.Style = []
    ItemHeight = 22
    ParentFont = False
    TabOrder = 0
  end
  object WinReasonBox: TComboBox
    Left = 24
    Top = 136
    Width = 713
    Height = 30
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'Arial'
    Font.Style = []
    ItemHeight = 22
    ParentFont = False
    TabOrder = 1
    Items.Strings = (
      #1055#1086#1073#1077#1076#1072' '#1089#1076#1072#1095#1077#1081' '#1089#1086#1087#1077#1088#1085#1080#1082#1072
      #1055#1086#1073#1077#1076#1072' '#1087#1086' '#1076#1080#1089#1082#1074#1072#1083#1080#1092#1080#1082#1072#1094#1080#1080
      #1055#1086#1073#1077#1076#1072' '#1074#1074#1080#1076#1091' '#1085#1077#1074#1086#1079#1084#1086#1078#1085#1086#1089#1090#1080' '#1087#1088#1086#1076#1086#1083#1078#1072#1090#1100' '#1073#1086#1081
      #1055#1086#1073#1077#1076#1072' '#1085#1077#1103#1074#1082#1086#1081
      #1055#1086#1073#1077#1076#1072' '#1085#1077#1089#1086#1086#1090#1074#1077#1090#1089#1090#1074#1080#1077#1084' '#1092#1086#1088#1084#1099' '#1080' '#1089#1085#1072#1088#1103#1078#1077#1085#1080#1103
      #1055#1086#1073#1077#1076#1072' '#1074#1074#1080#1076#1091' '#1103#1074#1085#1086#1075#1086' '#1090#1077#1093#1085#1080#1095#1077#1089#1082#1086#1075#1086' '#1087#1088#1077#1080#1084#1091#1097#1077#1089#1090#1074#1072
      #1055#1086#1073#1077#1076#1072' '#1087#1086' '#1086#1095#1082#1072#1084
      #1055#1086#1073#1077#1076#1072' '#1074' '#1076#1086#1087#1086#1083#1085#1080#1090#1077#1083#1100#1085#1086#1077' '#1074#1088#1077#1084#1103)
  end
  object OKBtn: TBitBtn
    Left = 24
    Top = 200
    Width = 329
    Height = 33
    Caption = #1055#1088#1080#1085#1103#1090#1100' '#1080' '#1079#1072#1082#1086#1085#1095#1080#1090#1100' '#1089#1093#1074#1072#1090#1082#1091
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'Arial'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 2
    Kind = bkOK
  end
  object CancelBtn: TBitBtn
    Left = 408
    Top = 200
    Width = 329
    Height = 33
    Caption = #1054#1090#1084#1077#1085#1072' '#1080' '#1074#1086#1079#1074#1088#1072#1090' '#1082' '#1089#1093#1074#1072#1090#1082#1077
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'Arial'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 3
    Kind = bkCancel
  end
end
