object DBPathForm: TDBPathForm
  Left = 348
  Top = 264
  Width = 778
  Height = 191
  Caption = #1042#1099#1073#1086#1088' '#1092#1072#1081#1083#1072' '#1041#1044' '#1087#1088#1086#1075#1088#1072#1084#1084#1099' '#1088#1077#1075#1080#1089#1090#1088#1072#1094#1080#1080' '#1091#1095#1072#1089#1090#1085#1080#1082#1086#1074
  Color = clGray
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object DBPathEdit: TLabeledEdit
    Left = 8
    Top = 32
    Width = 665
    Height = 28
    EditLabel.Width = 431
    EditLabel.Height = 18
    EditLabel.Caption = #1055#1091#1090#1100' '#1082' '#1092#1072#1081#1083#1091' '#1073#1072#1079#1099' '#1076#1072#1085#1085#1099#1093' '#1079#1072#1088#1077#1075#1080#1089#1090#1088#1080#1088#1086#1074#1072#1085#1085#1099#1093' '#1091#1095#1072#1089#1090#1085#1080#1082#1086#1074
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
  end
  object BrowseBtn: TBitBtn
    Left = 704
    Top = 32
    Width = 49
    Height = 28
    Caption = '. . .'
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'Arial'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 1
    OnClick = BrowseBtnClick
  end
  object OkBtn: TBitBtn
    Left = 312
    Top = 108
    Width = 185
    Height = 33
    Caption = 'OK'
    Default = True
    TabOrder = 2
    OnClick = OkBtnClick
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
  object CancelBtn: TBitBtn
    Left = 568
    Top = 108
    Width = 177
    Height = 33
    Caption = #1054#1090#1084#1077#1085#1072
    TabOrder = 3
    Kind = bkCancel
  end
  object CheckDBConnection: TCheckBox
    Left = 10
    Top = 70
    Width = 281
    Height = 17
    Caption = #1055#1088#1086#1074#1077#1088#1103#1090#1100' '#1089#1086#1077#1076#1080#1085#1077#1085#1080#1077' '#1089' '#1041#1044
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -15
    Font.Name = 'Arial'
    Font.Style = []
    ParentFont = False
    ParentShowHint = False
    ShowHint = False
    TabOrder = 4
  end
  object OpenDialog1: TOpenDialog
    Left = 536
  end
end
