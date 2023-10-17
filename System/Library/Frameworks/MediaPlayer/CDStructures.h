//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#pragma mark Function Pointers and Blocks

typedef void (*CDUnknownFunctionPointerType)(void); // return type and parameters are unknown

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CGPoint {
    double x;
    double y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    double width;
    double height;
};

struct DeviceLibrary;

struct DeviceLibraryView;

struct EntityCache;

struct EntityQuery;

struct EntityQueryResult;

struct ITColor {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
};

struct LocalizedSearchQuery;

struct ModelPropertyBase;

struct PropertiesQuery;

struct Query;

struct QueryResult;

struct SortDescriptor;

struct _NSRange {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct __shared_weak_count;

struct __tree_end_node<std::__tree_node_base<void *>*> {
    void *__left_;
};

struct map<MPModelStoreBrowseDetailedContentItemType, unsigned long, std::less<MPModelStoreBrowseDetailedContentItemType>, std::allocator<std::pair<const MPModelStoreBrowseDetailedContentItemType, unsigned long>>> {
    struct __tree<std::__value_type<MPModelStoreBrowseDetailedContentItemType, unsigned long>, std::__map_value_compare<MPModelStoreBrowseDetailedContentItemType, std::__value_type<MPModelStoreBrowseDetailedContentItemType, unsigned long>, std::less<MPModelStoreBrowseDetailedContentItemType>, true>, std::allocator<std::__value_type<MPModelStoreBrowseDetailedContentItemType, unsigned long>>> {
        void *__begin_node_;
        struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *>*>, std::allocator<std::__tree_node<std::__value_type<MPModelStoreBrowseDetailedContentItemType, unsigned long>, void *>>> {
            struct __tree_end_node<std::__tree_node_base<void *>*> __value_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__map_value_compare<MPModelStoreBrowseDetailedContentItemType, std::__value_type<MPModelStoreBrowseDetailedContentItemType, unsigned long>, std::less<MPModelStoreBrowseDetailedContentItemType>, true>> {
            unsigned long long __value_;
        } __pair3_;
    } __tree_;
};

struct map<long long, unsigned long, std::less<long long>, std::allocator<std::pair<const long long, unsigned long>>> {
    struct __tree<std::__value_type<long long, unsigned long>, std::__map_value_compare<long long, std::__value_type<long long, unsigned long>, std::less<long long>, true>, std::allocator<std::__value_type<long long, unsigned long>>> {
        void *__begin_node_;
        struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *>*>, std::allocator<std::__tree_node<std::__value_type<long long, unsigned long>, void *>>> {
            struct __tree_end_node<std::__tree_node_base<void *>*> __value_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__map_value_compare<long long, std::__value_type<long long, unsigned long>, std::less<long long>, true>> {
            unsigned long long __value_;
        } __pair3_;
    } __tree_;
};

struct map<long, MPIdentifierSet *, std::less<long>, std::allocator<std::pair<const long, MPIdentifierSet *>>> {
    struct __tree<std::__value_type<long, MPIdentifierSet *>, std::__map_value_compare<long, std::__value_type<long, MPIdentifierSet *>, std::less<long>, true>, std::allocator<std::__value_type<long, MPIdentifierSet *>>> {
        void *__begin_node_;
        struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *>*>, std::allocator<std::__tree_node<std::__value_type<long, MPIdentifierSet *>, void *>>> {
            struct __tree_end_node<std::__tree_node_base<void *>*> __value_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__map_value_compare<long, std::__value_type<long, MPIdentifierSet *>, std::less<long>, true>> {
            unsigned long long __value_;
        } __pair3_;
    } __tree_;
};

struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
};

struct os_unfair_recursive_lock_s {
    struct os_unfair_lock_s ourl_lock;
    unsigned int ourl_count;
};

struct shared_ptr<mlcore::DeviceLibrary> {
    struct DeviceLibrary *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<mlcore::DeviceLibraryView> {
    struct DeviceLibraryView *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<mlcore::EntityCache> {
    struct EntityCache *_field1;
    struct __shared_weak_count *_field2;
};

struct shared_ptr<mlcore::EntityQuery> {
    struct EntityQuery *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<mlcore::EntityQueryResult> {
    struct EntityQueryResult *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<mlcore::LocalizedSearchQuery> {
    struct LocalizedSearchQuery *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<mlcore::PropertiesQuery> {
    struct PropertiesQuery *_field1;
    struct __shared_weak_count *_field2;
};

struct shared_ptr<mlcore::Query> {
    struct Query *_field1;
    struct __shared_weak_count *_field2;
};

struct shared_ptr<mlcore::QueryResult> {
    struct QueryResult *_field1;
    struct __shared_weak_count *_field2;
};

struct shared_ptr<std::map<long long, std::shared_ptr<mlcore::EntityQueryResult>>> {
    void *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<std::unordered_map<std::string, mlcore::ModelPropertyBase *>> {
    void *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, mlcore::ModelPropertyBase *>, void *>*>*[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, mlcore::ModelPropertyBase *>, void *>*>*>>> {
    struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, mlcore::ModelPropertyBase *>, void *>*>**, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, mlcore::ModelPropertyBase *>, void *>*>*>>> {
        void **_field1;
        struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, mlcore::ModelPropertyBase *>, void *>*>*>> {
            struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, mlcore::ModelPropertyBase *>, void *>*>*>> {
                unsigned long long _field1;
            } _field1;
        } _field2;
    } _field1;
};

struct unordered_map<std::string, mlcore::ModelPropertyBase *, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, mlcore::ModelPropertyBase *>>> {
    struct __hash_table<std::__hash_value_type<std::string, mlcore::ModelPropertyBase *>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, mlcore::ModelPropertyBase *>, std::hash<std::string>, std::equal_to<std::string>, true>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, mlcore::ModelPropertyBase *>, std::equal_to<std::string>, std::hash<std::string>, true>, std::allocator<std::__hash_value_type<std::string, mlcore::ModelPropertyBase *>>> {
        struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, mlcore::ModelPropertyBase *>, void *>*>*[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, mlcore::ModelPropertyBase *>, void *>*>*>>> _field1;
        struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, mlcore::ModelPropertyBase *>, void *>*>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, mlcore::ModelPropertyBase *>, void *>>> {
            struct __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, mlcore::ModelPropertyBase *>, void *>*> {
                void *_field1;
            } _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, mlcore::ModelPropertyBase *>, std::hash<std::string>, std::equal_to<std::string>, true>> {
            unsigned long long _field1;
        } _field3;
        struct __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, mlcore::ModelPropertyBase *>, std::equal_to<std::string>, std::hash<std::string>, true>> {
            float _field1;
        } _field4;
    } _field1;
};

struct vector<long long, std::allocator<long long>> {
    long long *__begin_;
    long long *__end_;
    struct __compressed_pair<long long *, std::allocator<long long>> {
        long long *__value_;
    } __end_cap_;
};

struct vector<long, std::allocator<long>> {
    long long *__begin_;
    long long *__end_;
    struct __compressed_pair<long *, std::allocator<long>> {
        long long *__value_;
    } __end_cap_;
};

struct vector<mlcore::ModelPropertyBase *, std::allocator<mlcore::ModelPropertyBase *>> {
    struct ModelPropertyBase **_field1;
    struct ModelPropertyBase **_field2;
    struct __compressed_pair<mlcore::ModelPropertyBase **, std::allocator<mlcore::ModelPropertyBase *>> {
        struct ModelPropertyBase **_field1;
    } _field3;
};

struct vector<mlcore::SortDescriptor, std::allocator<mlcore::SortDescriptor>> {
    struct SortDescriptor *_field1;
    struct SortDescriptor *_field2;
    struct __compressed_pair<mlcore::SortDescriptor *, std::allocator<mlcore::SortDescriptor>> {
        struct SortDescriptor *_field1;
    } _field3;
};

struct vector<std::shared_ptr<mlcore::EntityCache>, std::allocator<std::shared_ptr<mlcore::EntityCache>>> {
    void *__begin_;
    void *__end_;
    struct __compressed_pair<std::shared_ptr<mlcore::EntityCache>*, std::allocator<std::shared_ptr<mlcore::EntityCache>>> {
        void *__value_;
    } __end_cap_;
};

struct vector<std::shared_ptr<mlcore::Predicate>, std::allocator<std::shared_ptr<mlcore::Predicate>>> {
    void *_field1;
    void *_field2;
    struct __compressed_pair<std::shared_ptr<mlcore::Predicate>*, std::allocator<std::shared_ptr<mlcore::Predicate>>> {
        void *_field1;
    } _field3;
};

#pragma mark Typedef'd Structures

typedef struct {
    _Bool _field1;
    _Bool _field2;
    _Bool _field3;
    _Bool _field4;
    _Bool _field5;
    _Bool _field6;
    _Bool _field7;
    _Bool _field8;
    long long _field9;
} CDStruct_d4f770cf;

typedef struct {
    _Bool useCarPlayBrowseTopLevelContentOnly;
    _Bool useCarPlayBrowseTopLevelRequestReorderingHeuristics;
} CDStruct_d2d88407;

typedef struct {
    unsigned long long _field1;
    id *_field2;
    unsigned long long *_field3;
    unsigned long long _field4[5];
} CDStruct_70511ce9;

typedef struct {
    unsigned int _field1[8];
} CDStruct_6ad76789;

// Template types
typedef struct shared_ptr<mlcore::DeviceLibrary> {
    struct DeviceLibrary *__ptr_;
    struct __shared_weak_count *__cntrl_;
} shared_ptr_0f3dbfb3;

typedef struct shared_ptr<mlcore::DeviceLibraryView> {
    struct DeviceLibraryView *__ptr_;
    struct __shared_weak_count *__cntrl_;
} shared_ptr_6af3da69;

typedef struct shared_ptr<mlcore::EntityCache> {
    struct EntityCache *_field1;
    struct __shared_weak_count *_field2;
} shared_ptr_1c86f238;

typedef struct shared_ptr<mlcore::EntityQuery> {
    struct EntityQuery *__ptr_;
    struct __shared_weak_count *__cntrl_;
} shared_ptr_e8455ceb;

typedef struct shared_ptr<mlcore::EntityQueryResult> {
    struct EntityQueryResult *__ptr_;
    struct __shared_weak_count *__cntrl_;
} shared_ptr_274c5e8b;

typedef struct shared_ptr<mlcore::LocalizedSearchQuery> {
    struct LocalizedSearchQuery *__ptr_;
    struct __shared_weak_count *__cntrl_;
} shared_ptr_299ddd6f;

typedef struct shared_ptr<mlcore::PropertiesQuery> {
    struct PropertiesQuery *_field1;
    struct __shared_weak_count *_field2;
} shared_ptr_889ae36a;

typedef struct shared_ptr<mlcore::Query> {
    struct Query *_field1;
    struct __shared_weak_count *_field2;
} shared_ptr_52fa41a5;

typedef struct shared_ptr<mlcore::QueryResult> {
    struct QueryResult *_field1;
    struct __shared_weak_count *_field2;
} shared_ptr_56e9c9de;

typedef struct shared_ptr<std::map<long long, std::shared_ptr<mlcore::EntityQueryResult>>> {
    void *__ptr_;
    struct __shared_weak_count *__cntrl_;
} shared_ptr_e975541e;

typedef struct shared_ptr<std::unordered_map<std::string, mlcore::ModelPropertyBase *>> {
    void *__ptr_;
    struct __shared_weak_count *__cntrl_;
} shared_ptr_66289562;

typedef struct unordered_map<std::string, mlcore::ModelPropertyBase *, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, mlcore::ModelPropertyBase *>>> {
    struct __hash_table<std::__hash_value_type<std::string, mlcore::ModelPropertyBase *>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, mlcore::ModelPropertyBase *>, std::hash<std::string>, std::equal_to<std::string>, true>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, mlcore::ModelPropertyBase *>, std::equal_to<std::string>, std::hash<std::string>, true>, std::allocator<std::__hash_value_type<std::string, mlcore::ModelPropertyBase *>>> {
        struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, mlcore::ModelPropertyBase *>, void *>*>*[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, mlcore::ModelPropertyBase *>, void *>*>*>>> _field1;
        struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, mlcore::ModelPropertyBase *>, void *>*>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, mlcore::ModelPropertyBase *>, void *>>> {
            struct __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, mlcore::ModelPropertyBase *>, void *>*> {
                void *_field1;
            } _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, mlcore::ModelPropertyBase *>, std::hash<std::string>, std::equal_to<std::string>, true>> {
            unsigned long long _field1;
        } _field3;
        struct __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, mlcore::ModelPropertyBase *>, std::equal_to<std::string>, std::hash<std::string>, true>> {
            float _field1;
        } _field4;
    } _field1;
} unordered_map_f010a342;

typedef struct vector<long long, std::allocator<long long>> {
    long long *__begin_;
    long long *__end_;
    struct __compressed_pair<long long *, std::allocator<long long>> {
        long long *__value_;
    } __end_cap_;
} vector_1ee95920;

typedef struct vector<mlcore::ModelPropertyBase *, std::allocator<mlcore::ModelPropertyBase *>> {
    struct ModelPropertyBase **_field1;
    struct ModelPropertyBase **_field2;
    struct __compressed_pair<mlcore::ModelPropertyBase **, std::allocator<mlcore::ModelPropertyBase *>> {
        struct ModelPropertyBase **_field1;
    } _field3;
} vector_2194507e;

typedef struct vector<mlcore::SortDescriptor, std::allocator<mlcore::SortDescriptor>> {
    struct SortDescriptor *_field1;
    struct SortDescriptor *_field2;
    struct __compressed_pair<mlcore::SortDescriptor *, std::allocator<mlcore::SortDescriptor>> {
        struct SortDescriptor *_field1;
    } _field3;
} vector_9ebba6ab;

typedef struct vector<std::shared_ptr<mlcore::Predicate>, std::allocator<std::shared_ptr<mlcore::Predicate>>> {
    void *_field1;
    void *_field2;
    struct __compressed_pair<std::shared_ptr<mlcore::Predicate>*, std::allocator<std::shared_ptr<mlcore::Predicate>>> {
        void *_field1;
    } _field3;
} vector_05d2ab2a;

