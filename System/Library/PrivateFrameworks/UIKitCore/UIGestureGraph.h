//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable, NSSet;

__attribute__((visibility("hidden")))
@interface UIGestureGraph : NSObject
{
    NSMapTable *_nodesByLabel;	// 8 = 0x8
    NSMapTable *_edgesByLabel;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000006ffa9c
- (void)traverseGraphBreadthFirstFromNode:(id)arg1 directed:(_Bool)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000006ff460
- (void)traverseGraphDepthFirstFromNode:(id)arg1 directed:(_Bool)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000006fee15
- (void)removeAllObjects;	// IMP=0x00000000006fedda
- (id)_edgesForLabel:(id)arg1;	// IMP=0x00000000006fed98
- (id)_allEdges;	// IMP=0x00000000006fec3c
- (void)enumerateEdgesWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000006fe9a6
- (void)enumerateEdgesWithLabel:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000006fe836
@property(readonly, nonatomic) NSSet *edgeLabels;
- (unsigned long long)edgeCountForLabel:(id)arg1;	// IMP=0x00000000006fe79d
@property(readonly, nonatomic) unsigned long long edgeCount;
- (id)addUniqueEdgeWithLabel:(id)arg1 sourceNode:(id)arg2 targetNode:(id)arg3 directed:(_Bool)arg4 properties:(id)arg5;	// IMP=0x00000000006fe399
- (id)edgesForLabel:(id)arg1 properties:(id)arg2;	// IMP=0x00000000006fe1b7
- (id)edgesForLabel:(id)arg1;	// IMP=0x00000000006fe160
- (void)removeEdges:(id)arg1;	// IMP=0x00000000006fe033
- (void)removeEdge:(id)arg1;	// IMP=0x00000000006fdf3a
- (id)addEdgeWithLabel:(id)arg1 sourceNode:(id)arg2 targetNode:(id)arg3 directed:(_Bool)arg4;	// IMP=0x00000000006fdec6
- (void)_addEdge:(id)arg1;	// IMP=0x00000000006fdd76
- (id)_nodesForLabel:(id)arg1;	// IMP=0x00000000006fdd34
- (id)_allNodes;	// IMP=0x00000000006fdbd8
- (void)enumerateNodesWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000006fd942
- (void)enumerateNodesWithLabel:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000006fd7d2
@property(readonly, nonatomic) NSSet *nodeLabels;
@property(readonly, nonatomic) unsigned long long nodeCount;
- (id)addUniqueNodeWithLabel:(id)arg1 properties:(id)arg2;	// IMP=0x00000000006fd557
- (id)nodesForLabel:(id)arg1 properties:(id)arg2;	// IMP=0x00000000006fd375
- (unsigned long long)nodeCountForLabel:(id)arg1;	// IMP=0x00000000006fd331
- (id)nodesForLabel:(id)arg1;	// IMP=0x00000000006fd31f
- (void)removeNodes:(id)arg1;	// IMP=0x00000000006fd1f2
- (void)removeNode:(id)arg1;	// IMP=0x00000000006fd167
- (void)removeNodeEdges:(id)arg1;	// IMP=0x00000000006fd02a
- (id)addNodeWithLabel:(id)arg1 properties:(id)arg2;	// IMP=0x00000000006fcfc0
- (id)addNodeWithLabel:(id)arg1;	// IMP=0x00000000006fcf68
- (void)_addNode:(id)arg1;	// IMP=0x00000000006fce89
- (id)description;	// IMP=0x00000000006fca22
- (id)init;	// IMP=0x00000000006fc985

@end
