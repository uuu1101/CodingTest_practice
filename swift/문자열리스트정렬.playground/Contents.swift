import UIKit

func solution(_ strings:[String], _ n:Int) -> [String] {
    var dicts = [String: Character]()

    for string in strings {
        if n < string.count {
            let index = string.index(string.startIndex, offsetBy: n)
            dicts[string] = string[index]
        }
    }

    let sortedStrings = dicts.sorted {
        $0.value == $1.value ? $0.key < $1.key : $0.value < $1.value
    }.map { $0.key }

    return sortedStrings
}

// 튜플 사용으로 개선

func solution(_ strings: [String], _ n: Int) -> [String] {
    let filteredStrings = strings.filter { $0.count > n }
    let tuples = filteredStrings.map { ($0, $0[$0.index($0.startIndex, offsetBy: n)]) }
    let sortedTuples = tuples.sorted {
        $0.1 == $1.1 ? $0.0 < $1.0 : $0.1 < $1.1
    }

    return sortedTuples.map { $0.0 }
}

