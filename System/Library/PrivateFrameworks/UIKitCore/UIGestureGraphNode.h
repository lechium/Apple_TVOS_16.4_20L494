//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMapTable, NSMutableSet, NSSet;

__attribute__((visibility("hidden")))
@interface UIGestureGraphNode
{
    NSMutableSet *_inEdges;	// 8 = 0x8
    NSMutableSet *_outEdges;	// 16 = 0x10
    NSMutableSet *_inOutEdges;	// 24 = 0x18
    NSMapTable *_edgesByLabel;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000007040c8
- (id)_edgesForType:(unsigned long long)arg1 createIfNeeded:(_Bool)arg2;	// IMP=0x0000000000704052
- (void)_removeEdge:(id)arg1;	// IMP=0x0000000000703f7d
- (void)_addEdge:(id)arg1;	// IMP=0x0000000000703e16
- (id)description;	// IMP=0x0000000000703cf6
- (void)enumerateNeighborNodesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000703b1c
@property(readonly, nonatomic) NSSet *inOutEdges;
@property(readonly, nonatomic) NSSet *outEdges;
@property(readonly, nonatomic) NSSet *inEdges;
@property(readonly, nonatomic) NSSet *allEdges;
- (id)edgesForLabel:(id)arg1;	// IMP=0x000000000070399f
- (void)enumerateEdgesBetweenNode:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000007037d0
- (void)enumerateEdgesFromNode:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000070360b
- (void)enumerateEdgesTowardNode:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000703446
- (_Bool)isInOutEdge:(id)arg1;	// IMP=0x0000000000703390
- (_Bool)isOutEdge:(id)arg1;	// IMP=0x0000000000703331
- (_Bool)isInEdge:(id)arg1;	// IMP=0x00000000007032d2
- (unsigned long long)typeOfEdge:(id)arg1;	// IMP=0x0000000000703292
- (_Bool)hasEdgeBetweenNode:(id)arg1;	// IMP=0x000000000070311e
- (_Bool)hasEdgeFromNode:(id)arg1;	// IMP=0x0000000000702fbf
- (_Bool)hasEdgeTowardNode:(id)arg1;	// IMP=0x0000000000702e60
- (unsigned long long)edgeCountForLabel:(id)arg1;	// IMP=0x0000000000702dfb
@property(readonly, nonatomic) unsigned long long edgeCount;

@end
