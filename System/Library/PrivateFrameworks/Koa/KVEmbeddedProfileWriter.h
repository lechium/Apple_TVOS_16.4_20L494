//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class KVDatasetInfo, KVProfileInfo, NSOutputStream, NSString;

@interface KVEmbeddedProfileWriter : NSObject
{
    NSOutputStream *_stream;	// 8 = 0x8
    KVProfileInfo *_profileInfo;	// 16 = 0x10
    KVDatasetInfo *_datasetInfo;	// 24 = 0x18
    struct FlatBufferBuilder _fbb;	// 32 = 0x20
    struct vector<apple::aiml::flatbuffers2::Offset<koa::vocabulary::Dataset>, std::allocator<apple::aiml::flatbuffers2::Offset<koa::vocabulary::Dataset>>> _datasets;	// 128 = 0x80
    struct vector<apple::aiml::flatbuffers2::Offset<koa::vocabulary::NestedItem>, std::allocator<apple::aiml::flatbuffers2::Offset<koa::vocabulary::NestedItem>>> _items;	// 152 = 0x98
}

- (id).cxx_construct;	// IMP=0x0000000000026ff1
- (void).cxx_destruct;	// IMP=0x0000000000026f85
- (_Bool)finishProfile:(id *)arg1;	// IMP=0x0000000000026dd4
- (_Bool)finishDataset:(id *)arg1;	// IMP=0x0000000000026ac1
- (_Bool)addItem:(id)arg1 error:(id *)arg2;	// IMP=0x000000000002680f
- (_Bool)startDataset:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000267fb
- (_Bool)startProfile:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000267e7
- (id)initWithOutputStream:(id)arg1;	// IMP=0x0000000000026768

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

