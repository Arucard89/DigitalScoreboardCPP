object DataModule1: TDataModule1
  OldCreateOrder = False
  OnCreate = DataModuleCreate
  Left = 1421
  Top = 176
  Height = 262
  Width = 224
  object ADOConnection: TADOConnection
    Connected = True
    ConnectionString = 
      'Provider=Microsoft.Jet.OLEDB.4.0;Data Source=D:\Working\MyProgra' +
      'ms\Delphi\'#1056#1077#1075#1080#1089#1090#1088#1072#1094#1080#1103' '#1091#1095#1072#1089#1090#1085#1080#1082#1086#1074'\DB\BASE.mdb;Persist Security In' +
      'fo=False'
    LoginPrompt = False
    Mode = cmShareDenyNone
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
    Parameters = <
      item
        Name = 'age'
        Attributes = [paNullable]
        DataType = ftFixedChar
        NumericScale = 255
        Precision = 255
        Size = 510
        Value = Null
      end
      item
        Name = 'weight'
        Attributes = [paNullable]
        DataType = ftFixedChar
        NumericScale = 255
        Precision = 255
        Size = 510
        Value = Null
      end
      item
        Name = 'belt'
        Attributes = [paNullable]
        DataType = ftFixedChar
        NumericScale = 255
        Precision = 255
        Size = 510
        Value = Null
      end>
    SQL.Strings = (
      
        'SELECT FIO FROM (t_ages INNER JOIN (t_belts INNER JOIN (t_weight' +
        's INNER JOIN t_main ON t_weights.id = t_main.weight) ON t_belts.' +
        'id = t_main.belt) ON t_ages.id = t_main.age) WHERE t_ages.age = ' +
        ':age AND t_weights.weight = :weight and t_belts.belt = :belt')
    Left = 56
    Top = 112
  end
  object ResultsADOQuery: TADOQuery
    Connection = ADOConnection
    Parameters = <
      item
        Name = 'pl1'
        Attributes = [paNullable]
        DataType = ftFixedChar
        NumericScale = 255
        Precision = 255
        Size = 510
        Value = Null
      end
      item
        Name = 'scores1'
        DataType = ftString
        Size = -1
        Value = Null
      end
      item
        Name = 'pl2'
        Attributes = [paNullable]
        DataType = ftFixedChar
        NumericScale = 255
        Precision = 255
        Size = 510
        Value = Null
      end
      item
        Name = 'scores2'
        Size = -1
        Value = Null
      end
      item
        Name = 'winner'
        Attributes = [paNullable]
        DataType = ftFixedChar
        NumericScale = 255
        Precision = 255
        Size = 510
        Value = Null
      end
      item
        Name = 'winreason'
        Attributes = [paNullable]
        DataType = ftFixedChar
        NumericScale = 255
        Precision = 255
        Size = 510
        Value = Null
      end
      item
        Name = 'timetoend'
        Attributes = [paNullable]
        DataType = ftFixedChar
        NumericScale = 255
        Precision = 255
        Size = 510
        Value = Null
      end
      item
        Name = 'age'
        Attributes = [paNullable]
        DataType = ftFixedChar
        NumericScale = 255
        Precision = 255
        Size = 510
        Value = Null
      end
      item
        Name = 'belt'
        Attributes = [paNullable]
        DataType = ftFixedChar
        NumericScale = 255
        Precision = 255
        Size = 510
        Value = Null
      end
      item
        Name = 'weight'
        Attributes = [paNullable]
        DataType = ftFixedChar
        NumericScale = 255
        Precision = 255
        Size = 510
        Value = Null
      end
      item
        Name = 'time'
        Attributes = [paNullable]
        DataType = ftFixedChar
        NumericScale = 255
        Precision = 255
        Size = 510
        Value = Null
      end>
    SQL.Strings = (
      
        'INSERT INTO [t_results] ([Player1], [Scores1], [Player2], [Score' +
        's2], [Winner], [WinReason], [TimeToEnd], [Weight], [Age], [Belt]' +
        ', [Time]) VALUES (:pl1, :scores1, :pl2, scores2, :winner, :winre' +
        'ason, :timetoend, :age, :belt, :weight, :time)')
    Left = 112
    Top = 112
  end
  object TestADOQuery: TADOQuery
    Connection = ADOConnection
    Parameters = <>
    SQL.Strings = (
      'SELECT COUNT(*) FROM t_main')
    Left = 90
    Top = 170
  end
end
