// automatically generated by the FlatBuffers compiler, do not modify

#ifndef FLATBUFFERS_GENERATED_BTLOGGER_LOGSERIALIZATION_H_
#define FLATBUFFERS_GENERATED_BTLOGGER_LOGSERIALIZATION_H_

#include "cpp/flatbuffers.h"

namespace LogSerialization
{

    struct PortModel;
    struct PortModelBuilder;

    struct PortConfig;
    struct PortConfigBuilder;

    struct TreeNode;
    struct TreeNodeBuilder;

    struct NodeModel;
    struct NodeModelBuilder;

    struct BehaviorTree;
    struct BehaviorTreeBuilder;

    struct Timestamp;

    struct StatusChange;

    struct StatusChangeLog;
    struct StatusChangeLogBuilder;

    enum NodeStatus : int8_t
    {
        NodeStatus_IDLE = 0,
        NodeStatus_RUNNING = 1,
        NodeStatus_SUCCESS = 2,
        NodeStatus_FAILURE = 3,
        NodeStatus_MIN = NodeStatus_IDLE,
        NodeStatus_MAX = NodeStatus_FAILURE
    };

    inline const NodeStatus (&EnumValuesNodeStatus())[4]
    {
        static const NodeStatus values[] = {
            NodeStatus_IDLE,
            NodeStatus_RUNNING,
            NodeStatus_SUCCESS,
            NodeStatus_FAILURE};
        return values;
    }

    inline const char *const *EnumNamesNodeStatus()
    {
        static const char *const names[5] = {
            "IDLE",
            "RUNNING",
            "SUCCESS",
            "FAILURE",
            nullptr};
        return names;
    }

    inline const char *EnumNameNodeStatus(NodeStatus e)
    {
        if (flatbuffers::IsOutRange(e, NodeStatus_IDLE, NodeStatus_FAILURE))
            return "";
        const size_t index = static_cast<size_t>(e);
        return EnumNamesNodeStatus()[index];
    }

    enum NodeType : int8_t
    {
        NodeType_UNDEFINED = 0,
        NodeType_ACTION = 1,
        NodeType_CONDITION = 2,
        NodeType_CONTROL = 3,
        NodeType_DECORATOR = 4,
        NodeType_SUBTREE = 5,
        NodeType_MIN = NodeType_UNDEFINED,
        NodeType_MAX = NodeType_SUBTREE
    };

    inline const NodeType (&EnumValuesNodeType())[6]
    {
        static const NodeType values[] = {
            NodeType_UNDEFINED,
            NodeType_ACTION,
            NodeType_CONDITION,
            NodeType_CONTROL,
            NodeType_DECORATOR,
            NodeType_SUBTREE};
        return values;
    }

    inline const char *const *EnumNamesNodeType()
    {
        static const char *const names[7] = {
            "UNDEFINED",
            "ACTION",
            "CONDITION",
            "CONTROL",
            "DECORATOR",
            "SUBTREE",
            nullptr};
        return names;
    }

    inline const char *EnumNameNodeType(NodeType e)
    {
        if (flatbuffers::IsOutRange(e, NodeType_UNDEFINED, NodeType_SUBTREE))
            return "";
        const size_t index = static_cast<size_t>(e);
        return EnumNamesNodeType()[index];
    }

    enum PortDirection : int8_t
    {
        PortDirection_INPUT = 0,
        PortDirection_OUTPUT = 1,
        PortDirection_INOUT = 2,
        PortDirection_MIN = PortDirection_INPUT,
        PortDirection_MAX = PortDirection_INOUT
    };

    inline const PortDirection (&EnumValuesPortDirection())[3]
    {
        static const PortDirection values[] = {
            PortDirection_INPUT,
            PortDirection_OUTPUT,
            PortDirection_INOUT};
        return values;
    }

    inline const char *const *EnumNamesPortDirection()
    {
        static const char *const names[4] = {
            "INPUT",
            "OUTPUT",
            "INOUT",
            nullptr};
        return names;
    }

    inline const char *EnumNamePortDirection(PortDirection e)
    {
        if (flatbuffers::IsOutRange(e, PortDirection_INPUT, PortDirection_INOUT))
            return "";
        const size_t index = static_cast<size_t>(e);
        return EnumNamesPortDirection()[index];
    }

    FLATBUFFERS_MANUALLY_ALIGNED_STRUCT(8)
    Timestamp FLATBUFFERS_FINAL_CLASS
    {
    private:
        uint64_t usec_since_epoch_;

    public:
        Timestamp()
            : usec_since_epoch_(0)
        {
        }
        Timestamp(uint64_t _usec_since_epoch)
            : usec_since_epoch_(flatbuffers::EndianScalar(_usec_since_epoch))
        {
        }
        uint64_t usec_since_epoch() const
        {
            return flatbuffers::EndianScalar(usec_since_epoch_);
        }
    };
    FLATBUFFERS_STRUCT_END(Timestamp, 8);

    FLATBUFFERS_MANUALLY_ALIGNED_STRUCT(8)
    StatusChange FLATBUFFERS_FINAL_CLASS
    {
    private:
        uint16_t uid_;
        int8_t prev_status_;
        int8_t status_;
        int32_t padding0__;
        LogSerialization::Timestamp timestamp_;

    public:
        StatusChange()
            : uid_(0),
              prev_status_(0),
              status_(0),
              padding0__(0),
              timestamp_()
        {
            (void)padding0__;
        }
        StatusChange(uint16_t _uid, LogSerialization::NodeStatus _prev_status, LogSerialization::NodeStatus _status, const LogSerialization::Timestamp &_timestamp)
            : uid_(flatbuffers::EndianScalar(_uid)),
              prev_status_(flatbuffers::EndianScalar(static_cast<int8_t>(_prev_status))),
              status_(flatbuffers::EndianScalar(static_cast<int8_t>(_status))),
              padding0__(0),
              timestamp_(_timestamp)
        {
            (void)padding0__;
        }
        uint16_t uid() const
        {
            return flatbuffers::EndianScalar(uid_);
        }
        LogSerialization::NodeStatus prev_status() const
        {
            return static_cast<LogSerialization::NodeStatus>(flatbuffers::EndianScalar(prev_status_));
        }
        LogSerialization::NodeStatus status() const
        {
            return static_cast<LogSerialization::NodeStatus>(flatbuffers::EndianScalar(status_));
        }
        const LogSerialization::Timestamp &timestamp() const
        {
            return timestamp_;
        }
    };
    FLATBUFFERS_STRUCT_END(StatusChange, 16);

    struct PortModel FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table
    {
        typedef PortModelBuilder Builder;
        enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE
        {
            VT_PORT_NAME = 4,
            VT_DIRECTION = 6,
            VT_TYPE_INFO = 8,
            VT_DESCRIPTION = 10
        };
        const flatbuffers::String *port_name() const
        {
            return GetPointer<const flatbuffers::String *>(VT_PORT_NAME);
        }
        LogSerialization::PortDirection direction() const
        {
            return static_cast<LogSerialization::PortDirection>(GetField<int8_t>(VT_DIRECTION, 0));
        }
        const flatbuffers::String *type_info() const
        {
            return GetPointer<const flatbuffers::String *>(VT_TYPE_INFO);
        }
        const flatbuffers::String *description() const
        {
            return GetPointer<const flatbuffers::String *>(VT_DESCRIPTION);
        }
        bool Verify(flatbuffers::Verifier &verifier) const
        {
            return VerifyTableStart(verifier) &&
                   VerifyOffset(verifier, VT_PORT_NAME) &&
                   verifier.VerifyString(port_name()) &&
                   VerifyField<int8_t>(verifier, VT_DIRECTION) &&
                   VerifyOffset(verifier, VT_TYPE_INFO) &&
                   verifier.VerifyString(type_info()) &&
                   VerifyOffset(verifier, VT_DESCRIPTION) &&
                   verifier.VerifyString(description()) &&
                   verifier.EndTable();
        }
    };

    struct PortModelBuilder
    {
        typedef PortModel Table;
        flatbuffers::FlatBufferBuilder &fbb_;
        flatbuffers::uoffset_t start_;
        void add_port_name(flatbuffers::Offset<flatbuffers::String> port_name)
        {
            fbb_.AddOffset(PortModel::VT_PORT_NAME, port_name);
        }
        void add_direction(LogSerialization::PortDirection direction)
        {
            fbb_.AddElement<int8_t>(PortModel::VT_DIRECTION, static_cast<int8_t>(direction), 0);
        }
        void add_type_info(flatbuffers::Offset<flatbuffers::String> type_info)
        {
            fbb_.AddOffset(PortModel::VT_TYPE_INFO, type_info);
        }
        void add_description(flatbuffers::Offset<flatbuffers::String> description)
        {
            fbb_.AddOffset(PortModel::VT_DESCRIPTION, description);
        }
        explicit PortModelBuilder(flatbuffers::FlatBufferBuilder &_fbb)
            : fbb_(_fbb)
        {
            start_ = fbb_.StartTable();
        }
        flatbuffers::Offset<PortModel> Finish()
        {
            const auto end = fbb_.EndTable(start_);
            auto o = flatbuffers::Offset<PortModel>(end);
            return o;
        }
    };

    inline flatbuffers::Offset<PortModel> CreatePortModel(
        flatbuffers::FlatBufferBuilder &_fbb,
        flatbuffers::Offset<flatbuffers::String> port_name = 0,
        LogSerialization::PortDirection direction = LogSerialization::PortDirection_INPUT,
        flatbuffers::Offset<flatbuffers::String> type_info = 0,
        flatbuffers::Offset<flatbuffers::String> description = 0)
    {
        PortModelBuilder builder_(_fbb);
        builder_.add_description(description);
        builder_.add_type_info(type_info);
        builder_.add_port_name(port_name);
        builder_.add_direction(direction);
        return builder_.Finish();
    }

    inline flatbuffers::Offset<PortModel> CreatePortModelDirect(
        flatbuffers::FlatBufferBuilder &_fbb,
        const char *port_name = nullptr,
        LogSerialization::PortDirection direction = LogSerialization::PortDirection_INPUT,
        const char *type_info = nullptr,
        const char *description = nullptr)
    {
        auto port_name__ = port_name ? _fbb.CreateString(port_name) : 0;
        auto type_info__ = type_info ? _fbb.CreateString(type_info) : 0;
        auto description__ = description ? _fbb.CreateString(description) : 0;
        return LogSerialization::CreatePortModel(
            _fbb,
            port_name__,
            direction,
            type_info__,
            description__);
    }

    struct PortConfig FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table
    {
        typedef PortConfigBuilder Builder;
        enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE
        {
            VT_PORT_NAME = 4,
            VT_REMAP = 6
        };
        const flatbuffers::String *port_name() const
        {
            return GetPointer<const flatbuffers::String *>(VT_PORT_NAME);
        }
        const flatbuffers::String *remap() const
        {
            return GetPointer<const flatbuffers::String *>(VT_REMAP);
        }
        bool Verify(flatbuffers::Verifier &verifier) const
        {
            return VerifyTableStart(verifier) &&
                   VerifyOffset(verifier, VT_PORT_NAME) &&
                   verifier.VerifyString(port_name()) &&
                   VerifyOffset(verifier, VT_REMAP) &&
                   verifier.VerifyString(remap()) &&
                   verifier.EndTable();
        }
    };

    struct PortConfigBuilder
    {
        typedef PortConfig Table;
        flatbuffers::FlatBufferBuilder &fbb_;
        flatbuffers::uoffset_t start_;
        void add_port_name(flatbuffers::Offset<flatbuffers::String> port_name)
        {
            fbb_.AddOffset(PortConfig::VT_PORT_NAME, port_name);
        }
        void add_remap(flatbuffers::Offset<flatbuffers::String> remap)
        {
            fbb_.AddOffset(PortConfig::VT_REMAP, remap);
        }
        explicit PortConfigBuilder(flatbuffers::FlatBufferBuilder &_fbb)
            : fbb_(_fbb)
        {
            start_ = fbb_.StartTable();
        }
        flatbuffers::Offset<PortConfig> Finish()
        {
            const auto end = fbb_.EndTable(start_);
            auto o = flatbuffers::Offset<PortConfig>(end);
            return o;
        }
    };

    inline flatbuffers::Offset<PortConfig> CreatePortConfig(
        flatbuffers::FlatBufferBuilder &_fbb,
        flatbuffers::Offset<flatbuffers::String> port_name = 0,
        flatbuffers::Offset<flatbuffers::String> remap = 0)
    {
        PortConfigBuilder builder_(_fbb);
        builder_.add_remap(remap);
        builder_.add_port_name(port_name);
        return builder_.Finish();
    }

    inline flatbuffers::Offset<PortConfig> CreatePortConfigDirect(
        flatbuffers::FlatBufferBuilder &_fbb,
        const char *port_name = nullptr,
        const char *remap = nullptr)
    {
        auto port_name__ = port_name ? _fbb.CreateString(port_name) : 0;
        auto remap__ = remap ? _fbb.CreateString(remap) : 0;
        return LogSerialization::CreatePortConfig(
            _fbb,
            port_name__,
            remap__);
    }

    struct TreeNode FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table
    {
        typedef TreeNodeBuilder Builder;
        enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE
        {
            VT_UID = 4,
            VT_CHILDREN_UID = 6,
            VT_STATUS = 8,
            VT_INSTANCE_NAME = 10,
            VT_REGISTRATION_NAME = 12,
            VT_PORT_REMAPS = 14
        };
        uint16_t uid() const
        {
            return GetField<uint16_t>(VT_UID, 0);
        }
        const flatbuffers::Vector<uint16_t> *children_uid() const
        {
            return GetPointer<const flatbuffers::Vector<uint16_t> *>(VT_CHILDREN_UID);
        }
        LogSerialization::NodeStatus status() const
        {
            return static_cast<LogSerialization::NodeStatus>(GetField<int8_t>(VT_STATUS, 0));
        }
        const flatbuffers::String *instance_name() const
        {
            return GetPointer<const flatbuffers::String *>(VT_INSTANCE_NAME);
        }
        const flatbuffers::String *registration_name() const
        {
            return GetPointer<const flatbuffers::String *>(VT_REGISTRATION_NAME);
        }
        const flatbuffers::Vector<flatbuffers::Offset<LogSerialization::PortConfig>> *port_remaps() const
        {
            return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<LogSerialization::PortConfig>> *>(VT_PORT_REMAPS);
        }
        bool Verify(flatbuffers::Verifier &verifier) const
        {
            return VerifyTableStart(verifier) &&
                   VerifyField<uint16_t>(verifier, VT_UID) &&
                   VerifyOffset(verifier, VT_CHILDREN_UID) &&
                   verifier.VerifyVector(children_uid()) &&
                   VerifyField<int8_t>(verifier, VT_STATUS) &&
                   VerifyOffsetRequired(verifier, VT_INSTANCE_NAME) &&
                   verifier.VerifyString(instance_name()) &&
                   VerifyOffsetRequired(verifier, VT_REGISTRATION_NAME) &&
                   verifier.VerifyString(registration_name()) &&
                   VerifyOffset(verifier, VT_PORT_REMAPS) &&
                   verifier.VerifyVector(port_remaps()) &&
                   verifier.VerifyVectorOfTables(port_remaps()) &&
                   verifier.EndTable();
        }
    };

    struct TreeNodeBuilder
    {
        typedef TreeNode Table;
        flatbuffers::FlatBufferBuilder &fbb_;
        flatbuffers::uoffset_t start_;
        void add_uid(uint16_t uid)
        {
            fbb_.AddElement<uint16_t>(TreeNode::VT_UID, uid, 0);
        }
        void add_children_uid(flatbuffers::Offset<flatbuffers::Vector<uint16_t>> children_uid)
        {
            fbb_.AddOffset(TreeNode::VT_CHILDREN_UID, children_uid);
        }
        void add_status(LogSerialization::NodeStatus status)
        {
            fbb_.AddElement<int8_t>(TreeNode::VT_STATUS, static_cast<int8_t>(status), 0);
        }
        void add_instance_name(flatbuffers::Offset<flatbuffers::String> instance_name)
        {
            fbb_.AddOffset(TreeNode::VT_INSTANCE_NAME, instance_name);
        }
        void add_registration_name(flatbuffers::Offset<flatbuffers::String> registration_name)
        {
            fbb_.AddOffset(TreeNode::VT_REGISTRATION_NAME, registration_name);
        }
        void add_port_remaps(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<LogSerialization::PortConfig>>> port_remaps)
        {
            fbb_.AddOffset(TreeNode::VT_PORT_REMAPS, port_remaps);
        }
        explicit TreeNodeBuilder(flatbuffers::FlatBufferBuilder &_fbb)
            : fbb_(_fbb)
        {
            start_ = fbb_.StartTable();
        }
        flatbuffers::Offset<TreeNode> Finish()
        {
            const auto end = fbb_.EndTable(start_);
            auto o = flatbuffers::Offset<TreeNode>(end);
            fbb_.Required(o, TreeNode::VT_INSTANCE_NAME);
            fbb_.Required(o, TreeNode::VT_REGISTRATION_NAME);
            return o;
        }
    };

    inline flatbuffers::Offset<TreeNode> CreateTreeNode(
        flatbuffers::FlatBufferBuilder &_fbb,
        uint16_t uid = 0,
        flatbuffers::Offset<flatbuffers::Vector<uint16_t>> children_uid = 0,
        LogSerialization::NodeStatus status = LogSerialization::NodeStatus_IDLE,
        flatbuffers::Offset<flatbuffers::String> instance_name = 0,
        flatbuffers::Offset<flatbuffers::String> registration_name = 0,
        flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<LogSerialization::PortConfig>>> port_remaps = 0)
    {
        TreeNodeBuilder builder_(_fbb);
        builder_.add_port_remaps(port_remaps);
        builder_.add_registration_name(registration_name);
        builder_.add_instance_name(instance_name);
        builder_.add_children_uid(children_uid);
        builder_.add_uid(uid);
        builder_.add_status(status);
        return builder_.Finish();
    }

    inline flatbuffers::Offset<TreeNode> CreateTreeNodeDirect(
        flatbuffers::FlatBufferBuilder &_fbb,
        uint16_t uid = 0,
        const std::vector<uint16_t> *children_uid = nullptr,
        LogSerialization::NodeStatus status = LogSerialization::NodeStatus_IDLE,
        const char *instance_name = nullptr,
        const char *registration_name = nullptr,
        const std::vector<flatbuffers::Offset<LogSerialization::PortConfig>> *port_remaps = nullptr)
    {
        auto children_uid__ = children_uid ? _fbb.CreateVector<uint16_t>(*children_uid) : 0;
        auto instance_name__ = instance_name ? _fbb.CreateString(instance_name) : 0;
        auto registration_name__ = registration_name ? _fbb.CreateString(registration_name) : 0;
        auto port_remaps__ = port_remaps ? _fbb.CreateVector<flatbuffers::Offset<LogSerialization::PortConfig>>(*port_remaps) : 0;
        return LogSerialization::CreateTreeNode(
            _fbb,
            uid,
            children_uid__,
            status,
            instance_name__,
            registration_name__,
            port_remaps__);
    }

    struct NodeModel FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table
    {
        typedef NodeModelBuilder Builder;
        enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE
        {
            VT_REGISTRATION_NAME = 4,
            VT_TYPE = 6,
            VT_PORTS = 8
        };
        const flatbuffers::String *registration_name() const
        {
            return GetPointer<const flatbuffers::String *>(VT_REGISTRATION_NAME);
        }
        LogSerialization::NodeType type() const
        {
            return static_cast<LogSerialization::NodeType>(GetField<int8_t>(VT_TYPE, 0));
        }
        const flatbuffers::Vector<flatbuffers::Offset<LogSerialization::PortModel>> *ports() const
        {
            return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<LogSerialization::PortModel>> *>(VT_PORTS);
        }
        bool Verify(flatbuffers::Verifier &verifier) const
        {
            return VerifyTableStart(verifier) &&
                   VerifyOffsetRequired(verifier, VT_REGISTRATION_NAME) &&
                   verifier.VerifyString(registration_name()) &&
                   VerifyField<int8_t>(verifier, VT_TYPE) &&
                   VerifyOffset(verifier, VT_PORTS) &&
                   verifier.VerifyVector(ports()) &&
                   verifier.VerifyVectorOfTables(ports()) &&
                   verifier.EndTable();
        }
    };

    struct NodeModelBuilder
    {
        typedef NodeModel Table;
        flatbuffers::FlatBufferBuilder &fbb_;
        flatbuffers::uoffset_t start_;
        void add_registration_name(flatbuffers::Offset<flatbuffers::String> registration_name)
        {
            fbb_.AddOffset(NodeModel::VT_REGISTRATION_NAME, registration_name);
        }
        void add_type(LogSerialization::NodeType type)
        {
            fbb_.AddElement<int8_t>(NodeModel::VT_TYPE, static_cast<int8_t>(type), 0);
        }
        void add_ports(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<LogSerialization::PortModel>>> ports)
        {
            fbb_.AddOffset(NodeModel::VT_PORTS, ports);
        }
        explicit NodeModelBuilder(flatbuffers::FlatBufferBuilder &_fbb)
            : fbb_(_fbb)
        {
            start_ = fbb_.StartTable();
        }
        flatbuffers::Offset<NodeModel> Finish()
        {
            const auto end = fbb_.EndTable(start_);
            auto o = flatbuffers::Offset<NodeModel>(end);
            fbb_.Required(o, NodeModel::VT_REGISTRATION_NAME);
            return o;
        }
    };

    inline flatbuffers::Offset<NodeModel> CreateNodeModel(
        flatbuffers::FlatBufferBuilder &_fbb,
        flatbuffers::Offset<flatbuffers::String> registration_name = 0,
        LogSerialization::NodeType type = LogSerialization::NodeType_UNDEFINED,
        flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<LogSerialization::PortModel>>> ports = 0)
    {
        NodeModelBuilder builder_(_fbb);
        builder_.add_ports(ports);
        builder_.add_registration_name(registration_name);
        builder_.add_type(type);
        return builder_.Finish();
    }

    inline flatbuffers::Offset<NodeModel> CreateNodeModelDirect(
        flatbuffers::FlatBufferBuilder &_fbb,
        const char *registration_name = nullptr,
        LogSerialization::NodeType type = LogSerialization::NodeType_UNDEFINED,
        const std::vector<flatbuffers::Offset<LogSerialization::PortModel>> *ports = nullptr)
    {
        auto registration_name__ = registration_name ? _fbb.CreateString(registration_name) : 0;
        auto ports__ = ports ? _fbb.CreateVector<flatbuffers::Offset<LogSerialization::PortModel>>(*ports) : 0;
        return LogSerialization::CreateNodeModel(
            _fbb,
            registration_name__,
            type,
            ports__);
    }

    struct BehaviorTree FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table
    {
        typedef BehaviorTreeBuilder Builder;
        enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE
        {
            VT_ROOT_UID = 4,
            VT_NODES = 6,
            VT_NODE_MODELS = 8
        };
        uint16_t root_uid() const
        {
            return GetField<uint16_t>(VT_ROOT_UID, 0);
        }
        const flatbuffers::Vector<flatbuffers::Offset<LogSerialization::TreeNode>> *nodes() const
        {
            return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<LogSerialization::TreeNode>> *>(VT_NODES);
        }
        const flatbuffers::Vector<flatbuffers::Offset<LogSerialization::NodeModel>> *node_models() const
        {
            return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<LogSerialization::NodeModel>> *>(VT_NODE_MODELS);
        }
        bool Verify(flatbuffers::Verifier &verifier) const
        {
            return VerifyTableStart(verifier) &&
                   VerifyField<uint16_t>(verifier, VT_ROOT_UID) &&
                   VerifyOffset(verifier, VT_NODES) &&
                   verifier.VerifyVector(nodes()) &&
                   verifier.VerifyVectorOfTables(nodes()) &&
                   VerifyOffset(verifier, VT_NODE_MODELS) &&
                   verifier.VerifyVector(node_models()) &&
                   verifier.VerifyVectorOfTables(node_models()) &&
                   verifier.EndTable();
        }
    };

    struct BehaviorTreeBuilder
    {
        typedef BehaviorTree Table;
        flatbuffers::FlatBufferBuilder &fbb_;
        flatbuffers::uoffset_t start_;
        void add_root_uid(uint16_t root_uid)
        {
            fbb_.AddElement<uint16_t>(BehaviorTree::VT_ROOT_UID, root_uid, 0);
        }
        void add_nodes(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<LogSerialization::TreeNode>>> nodes)
        {
            fbb_.AddOffset(BehaviorTree::VT_NODES, nodes);
        }
        void add_node_models(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<LogSerialization::NodeModel>>> node_models)
        {
            fbb_.AddOffset(BehaviorTree::VT_NODE_MODELS, node_models);
        }
        explicit BehaviorTreeBuilder(flatbuffers::FlatBufferBuilder &_fbb)
            : fbb_(_fbb)
        {
            start_ = fbb_.StartTable();
        }
        flatbuffers::Offset<BehaviorTree> Finish()
        {
            const auto end = fbb_.EndTable(start_);
            auto o = flatbuffers::Offset<BehaviorTree>(end);
            return o;
        }
    };

    inline flatbuffers::Offset<BehaviorTree> CreateBehaviorTree(
        flatbuffers::FlatBufferBuilder &_fbb,
        uint16_t root_uid = 0,
        flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<LogSerialization::TreeNode>>> nodes = 0,
        flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<LogSerialization::NodeModel>>> node_models = 0)
    {
        BehaviorTreeBuilder builder_(_fbb);
        builder_.add_node_models(node_models);
        builder_.add_nodes(nodes);
        builder_.add_root_uid(root_uid);
        return builder_.Finish();
    }

    inline flatbuffers::Offset<BehaviorTree> CreateBehaviorTreeDirect(
        flatbuffers::FlatBufferBuilder &_fbb,
        uint16_t root_uid = 0,
        const std::vector<flatbuffers::Offset<LogSerialization::TreeNode>> *nodes = nullptr,
        const std::vector<flatbuffers::Offset<LogSerialization::NodeModel>> *node_models = nullptr)
    {
        auto nodes__ = nodes ? _fbb.CreateVector<flatbuffers::Offset<LogSerialization::TreeNode>>(*nodes) : 0;
        auto node_models__ = node_models ? _fbb.CreateVector<flatbuffers::Offset<LogSerialization::NodeModel>>(*node_models) : 0;
        return LogSerialization::CreateBehaviorTree(
            _fbb,
            root_uid,
            nodes__,
            node_models__);
    }

    struct StatusChangeLog FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table
    {
        typedef StatusChangeLogBuilder Builder;
        enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE
        {
            VT_BEHAVIOR_TREE = 4,
            VT_STATE_CHANGES = 6
        };
        const LogSerialization::BehaviorTree *behavior_tree() const
        {
            return GetPointer<const LogSerialization::BehaviorTree *>(VT_BEHAVIOR_TREE);
        }
        const flatbuffers::Vector<const LogSerialization::StatusChange *> *state_changes() const
        {
            return GetPointer<const flatbuffers::Vector<const LogSerialization::StatusChange *> *>(VT_STATE_CHANGES);
        }
        bool Verify(flatbuffers::Verifier &verifier) const
        {
            return VerifyTableStart(verifier) &&
                   VerifyOffset(verifier, VT_BEHAVIOR_TREE) &&
                   verifier.VerifyTable(behavior_tree()) &&
                   VerifyOffset(verifier, VT_STATE_CHANGES) &&
                   verifier.VerifyVector(state_changes()) &&
                   verifier.EndTable();
        }
    };

    struct StatusChangeLogBuilder
    {
        typedef StatusChangeLog Table;
        flatbuffers::FlatBufferBuilder &fbb_;
        flatbuffers::uoffset_t start_;
        void add_behavior_tree(flatbuffers::Offset<LogSerialization::BehaviorTree> behavior_tree)
        {
            fbb_.AddOffset(StatusChangeLog::VT_BEHAVIOR_TREE, behavior_tree);
        }
        void add_state_changes(flatbuffers::Offset<flatbuffers::Vector<const LogSerialization::StatusChange *>> state_changes)
        {
            fbb_.AddOffset(StatusChangeLog::VT_STATE_CHANGES, state_changes);
        }
        explicit StatusChangeLogBuilder(flatbuffers::FlatBufferBuilder &_fbb)
            : fbb_(_fbb)
        {
            start_ = fbb_.StartTable();
        }
        flatbuffers::Offset<StatusChangeLog> Finish()
        {
            const auto end = fbb_.EndTable(start_);
            auto o = flatbuffers::Offset<StatusChangeLog>(end);
            return o;
        }
    };

    inline flatbuffers::Offset<StatusChangeLog> CreateStatusChangeLog(
        flatbuffers::FlatBufferBuilder &_fbb,
        flatbuffers::Offset<LogSerialization::BehaviorTree> behavior_tree = 0,
        flatbuffers::Offset<flatbuffers::Vector<const LogSerialization::StatusChange *>> state_changes = 0)
    {
        StatusChangeLogBuilder builder_(_fbb);
        builder_.add_state_changes(state_changes);
        builder_.add_behavior_tree(behavior_tree);
        return builder_.Finish();
    }

    inline flatbuffers::Offset<StatusChangeLog> CreateStatusChangeLogDirect(
        flatbuffers::FlatBufferBuilder &_fbb,
        flatbuffers::Offset<LogSerialization::BehaviorTree> behavior_tree = 0,
        const std::vector<LogSerialization::StatusChange> *state_changes = nullptr)
    {
        auto state_changes__ = state_changes ? _fbb.CreateVectorOfStructs<LogSerialization::StatusChange>(*state_changes) : 0;
        return LogSerialization::CreateStatusChangeLog(
            _fbb,
            behavior_tree,
            state_changes__);
    }

    inline const LogSerialization::BehaviorTree *GetBehaviorTree(const void *buf)
    {
        return flatbuffers::GetRoot<LogSerialization::BehaviorTree>(buf);
    }

    inline const LogSerialization::BehaviorTree *GetSizePrefixedBehaviorTree(const void *buf)
    {
        return flatbuffers::GetSizePrefixedRoot<LogSerialization::BehaviorTree>(buf);
    }

    inline bool VerifyBehaviorTreeBuffer(
        flatbuffers::Verifier &verifier)
    {
        return verifier.VerifyBuffer<LogSerialization::BehaviorTree>(nullptr);
    }

    inline bool VerifySizePrefixedBehaviorTreeBuffer(
        flatbuffers::Verifier &verifier)
    {
        return verifier.VerifySizePrefixedBuffer<LogSerialization::BehaviorTree>(nullptr);
    }

    inline void FinishBehaviorTreeBuffer(
        flatbuffers::FlatBufferBuilder &fbb,
        flatbuffers::Offset<LogSerialization::BehaviorTree> root)
    {
        fbb.Finish(root);
    }

    inline void FinishSizePrefixedBehaviorTreeBuffer(
        flatbuffers::FlatBufferBuilder &fbb,
        flatbuffers::Offset<LogSerialization::BehaviorTree> root)
    {
        fbb.FinishSizePrefixed(root);
    }

} // namespace LogSerialization

#endif // FLATBUFFERS_GENERATED_BTLOGGER_LOGSERIALIZATION_H_
