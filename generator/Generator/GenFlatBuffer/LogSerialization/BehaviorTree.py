# automatically generated by the FlatBuffers compiler, do not modify

# namespace: LogSerialization

import flatbuffers
from flatbuffers.compat import import_numpy
np = import_numpy()

class BehaviorTree(object):
    __slots__ = ['_tab']

    @classmethod
    def GetRootAs(cls, buf, offset=0):
        n = flatbuffers.encode.Get(flatbuffers.packer.uoffset, buf, offset)
        x = BehaviorTree()
        x.Init(buf, n + offset)
        return x

    @classmethod
    def GetRootAsBehaviorTree(cls, buf, offset=0):
        """This method is deprecated. Please switch to GetRootAs."""
        return cls.GetRootAs(buf, offset)
    # BehaviorTree
    def Init(self, buf, pos):
        self._tab = flatbuffers.table.Table(buf, pos)

    # BehaviorTree
    def RootUid(self):
        o = flatbuffers.number_types.UOffsetTFlags.py_type(self._tab.Offset(4))
        if o != 0:
            return self._tab.Get(flatbuffers.number_types.Uint16Flags, o + self._tab.Pos)
        return 0

    # BehaviorTree
    def Nodes(self, j):
        o = flatbuffers.number_types.UOffsetTFlags.py_type(self._tab.Offset(6))
        if o != 0:
            x = self._tab.Vector(o)
            x += flatbuffers.number_types.UOffsetTFlags.py_type(j) * 4
            x = self._tab.Indirect(x)
            from LogSerialization.TreeNode import TreeNode
            obj = TreeNode()
            obj.Init(self._tab.Bytes, x)
            return obj
        return None

    # BehaviorTree
    def NodesLength(self):
        o = flatbuffers.number_types.UOffsetTFlags.py_type(self._tab.Offset(6))
        if o != 0:
            return self._tab.VectorLen(o)
        return 0

    # BehaviorTree
    def NodesIsNone(self):
        o = flatbuffers.number_types.UOffsetTFlags.py_type(self._tab.Offset(6))
        return o == 0

    # BehaviorTree
    def NodeModels(self, j):
        o = flatbuffers.number_types.UOffsetTFlags.py_type(self._tab.Offset(8))
        if o != 0:
            x = self._tab.Vector(o)
            x += flatbuffers.number_types.UOffsetTFlags.py_type(j) * 4
            x = self._tab.Indirect(x)
            from LogSerialization.NodeModel import NodeModel
            obj = NodeModel()
            obj.Init(self._tab.Bytes, x)
            return obj
        return None

    # BehaviorTree
    def NodeModelsLength(self):
        o = flatbuffers.number_types.UOffsetTFlags.py_type(self._tab.Offset(8))
        if o != 0:
            return self._tab.VectorLen(o)
        return 0

    # BehaviorTree
    def NodeModelsIsNone(self):
        o = flatbuffers.number_types.UOffsetTFlags.py_type(self._tab.Offset(8))
        return o == 0

def Start(builder): builder.StartObject(3)
def BehaviorTreeStart(builder):
    """This method is deprecated. Please switch to Start."""
    return Start(builder)
def AddRootUid(builder, rootUid): builder.PrependUint16Slot(0, rootUid, 0)
def BehaviorTreeAddRootUid(builder, rootUid):
    """This method is deprecated. Please switch to AddRootUid."""
    return AddRootUid(builder, rootUid)
def AddNodes(builder, nodes): builder.PrependUOffsetTRelativeSlot(1, flatbuffers.number_types.UOffsetTFlags.py_type(nodes), 0)
def BehaviorTreeAddNodes(builder, nodes):
    """This method is deprecated. Please switch to AddNodes."""
    return AddNodes(builder, nodes)
def StartNodesVector(builder, numElems): return builder.StartVector(4, numElems, 4)
def BehaviorTreeStartNodesVector(builder, numElems):
    """This method is deprecated. Please switch to Start."""
    return StartNodesVector(builder, numElems)
def AddNodeModels(builder, nodeModels): builder.PrependUOffsetTRelativeSlot(2, flatbuffers.number_types.UOffsetTFlags.py_type(nodeModels), 0)
def BehaviorTreeAddNodeModels(builder, nodeModels):
    """This method is deprecated. Please switch to AddNodeModels."""
    return AddNodeModels(builder, nodeModels)
def StartNodeModelsVector(builder, numElems): return builder.StartVector(4, numElems, 4)
def BehaviorTreeStartNodeModelsVector(builder, numElems):
    """This method is deprecated. Please switch to Start."""
    return StartNodeModelsVector(builder, numElems)
def End(builder): return builder.EndObject()
def BehaviorTreeEnd(builder):
    """This method is deprecated. Please switch to End."""
    return End(builder)