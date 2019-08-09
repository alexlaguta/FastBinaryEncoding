// Automatically generated by the Fast Binary Encoding compiler, do not modify!
// https://github.com/chronoxor/FastBinaryEncoding
// Source: test.fbe
// Version: 1.3.0.0

package test

import "fmt"
import "strconv"
import "strings"
import "errors"
import "../fbe"
import "../proto"

// Workaround for Go unused imports issue
var _ = errors.New
var _ = fbe.Version
var _ = proto.Version

// Workaround for Go unused imports issue
var _ = fmt.Print
var _ = strconv.FormatInt

// StructHashEx key
type StructHashExKey struct {
}

// Convert StructHashEx flags key to string
func (k *StructHashExKey) String() string {
    var sb strings.Builder
    sb.WriteString("StructHashExKey(")
    sb.WriteString(")")
    return sb.String()
}

// StructHashEx struct
type StructHashEx struct {
    F1 map[StructSimpleKey]struct{Key StructSimple; Value StructNested} `json:"f1"`
    F2 map[StructSimpleKey]struct{Key StructSimple; Value *StructNested} `json:"f2"`
}

// Create a new StructHashEx struct
func NewStructHashEx() *StructHashEx {
    return &StructHashEx{
        F1: make(map[StructSimpleKey]struct{Key StructSimple; Value StructNested}),
        F2: make(map[StructSimpleKey]struct{Key StructSimple; Value *StructNested}),
    }
}

// Create a new StructHashEx struct from the given field values
func NewStructHashExFromFieldValues(F1 map[StructSimpleKey]struct{Key StructSimple; Value StructNested}, F2 map[StructSimpleKey]struct{Key StructSimple; Value *StructNested}) *StructHashEx {
    return &StructHashEx{F1, F2}
}

// Create a new StructHashEx struct from JSON
func NewStructHashExFromJSON(buffer []byte) (*StructHashEx, error) {
    result := *NewStructHashEx()
    err := fbe.Json.Unmarshal(buffer, &result)
    if err != nil {
        return nil, err
    }
    return &result, nil
}

// Struct shallow copy
func (s *StructHashEx) Copy() *StructHashEx {
    var result = *s
    return &result
}

// Struct deep clone
func (s *StructHashEx) Clone() *StructHashEx {
    // Serialize the struct to the FBE stream
    writer := NewStructHashExModel(fbe.NewEmptyBuffer())
    _, _ = writer.Serialize(s)

    // Deserialize the struct from the FBE stream
    reader := NewStructHashExModel(writer.Buffer())
    result, _, _ := reader.Deserialize()
    return result
}

// Get the struct key
func (s *StructHashEx) Key() StructHashExKey {
    return StructHashExKey{
    }
}

// Convert struct to optional
func (s *StructHashEx) Optional() *StructHashEx {
    return s
}

// Get the FBE type
func (s *StructHashEx) FBEType() int { return 142 }

// Convert struct to string
func (s *StructHashEx) String() string {
    var sb strings.Builder
    sb.WriteString("StructHashEx(")
    sb.WriteString("f1=")
    if s.F1 != nil {
        first := true
        sb.WriteString("[" + strconv.FormatInt(int64(len(s.F1)), 10) + "][{")
        for _, v := range s.F1 {
            if first { sb.WriteString("") } else { sb.WriteString(",") }
            sb.WriteString(v.Key.String())
            sb.WriteString("->")
            sb.WriteString(v.Value.String())
            first = false
        }
        sb.WriteString("}]")
    } else {
        sb.WriteString("f1=[0][{}]")
    }
    sb.WriteString(",f2=")
    if s.F2 != nil {
        first := true
        sb.WriteString("[" + strconv.FormatInt(int64(len(s.F2)), 10) + "][{")
        for _, v := range s.F2 {
            if first { sb.WriteString("") } else { sb.WriteString(",") }
            sb.WriteString(v.Key.String())
            sb.WriteString("->")
            if v.Value != nil { 
                sb.WriteString(v.Value.String())
            } else {
                sb.WriteString("null")
            }
            first = false
        }
        sb.WriteString("}]")
    } else {
        sb.WriteString(",f2=[0][{}]")
    }
    sb.WriteString(")")
    return sb.String()
}

// Convert struct to JSON
func (s *StructHashEx) JSON() ([]byte, error) {
    return fbe.Json.Marshal(s)
}
