object DataModule1: TDataModule1
  OldCreateOrder = False
  Left = 1558
  Top = 140
  Height = 262
  Width = 224
  object ADOConnection: TADOConnection
    ConnectionString = 
      'Provider=Microsoft.Jet.OLEDB.4.0;Data Source=D:\Working\MyProgra' +
      'ms\Delphi\'#1056#1077#1075#1080#1089#1090#1088#1072#1094#1080#1103' '#1091#1095#1072#1089#1090#1085#1080#1082#1086#1074'\DB\BASE.mdb;Persist Security In' +
      'fo=False'
    LoginPrompt = False
    Provider = 'Microsoft.Jet.OLEDB.4.0'
    Left = 80
    Top = 8
  end
  object WeightADOQuery: TADOQuery
    Connection = ADOConnection
    Parameters = <>
    SQL.Strings = (
      'SELECT * FROM t_weights')
    Left = 144
    Top = 56
  end
  object AgeADOQuery: TADOQuery
    Connection = ADOConnection
    Parameters = <>
    SQL.Strings = (
      'SELECT * FROM t_ages ')
    Left = 16
    Top = 56
  end
  object BeltADOQuery: TADOQuery
    Connection = ADOConnection
    Parameters = <>
    SQL.Strings = (
      'SELECT * FROM t_belts')
    Left = 80
    Top = 56
  end
  object PlayersADOQuery: TADOQuery
    Connection = ADOConnection
    Parameters = <>
    Left = 56
    Top = 112
  end
  object ResultsADOQuery: TADOQuery
    Connection = ADOConnection
    Parameters = <>
    Left = 112
    Top = 112
  end
end
