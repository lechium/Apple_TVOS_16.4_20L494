//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableOrderedSet, NSString;

@interface BKNamespaceNode : NSObject
{
    NSString *_name;	// 8 = 0x8
    NSObject *_object;	// 16 = 0x10
    NSMutableOrderedSet *_subnodes;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000000759bf
@property(retain, nonatomic) NSMutableOrderedSet *subnodes; // @synthesize subnodes=_subnodes;
@property(retain, nonatomic) NSObject *object; // @synthesize object=_object;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void)_dumpNodeTree:(id)arg1 level:(long long)arg2;	// IMP=0x00100000000756cc
- (id)_enumerateKeyPathNodesByComponent:(id)arg1 options:(long long)arg2 ifFound:(CDUnknownBlockType)arg3 ifMissing:(CDUnknownBlockType)arg4;	// IMP=0x0010000000075292
- (void)_enumerateNodesWithOptions:(long long)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x0010000000075107
- (void)dumpNodeTree;	// IMP=0x00100000000750ef
- (id)enumerateKeyPathNodes:(id)arg1 options:(long long)arg2 ifFound:(CDUnknownBlockType)arg3 ifMissing:(CDUnknownBlockType)arg4;	// IMP=0x001000000007503f
- (void)enumerateNodesWithOptions:(long long)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000007502d
- (id)setObject:(id)arg1 atKeyPath:(id)arg2;	// IMP=0x0010000000074fad
- (id)objectAtKeyPath:(id)arg1;	// IMP=0x0010000000074f5d
- (id)nodeAtKeyPath:(id)arg1;	// IMP=0x0010000000074f43
- (void)removeNodeAtKeyPath:(id)arg1;	// IMP=0x0010000000074e09
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000074d03
- (unsigned long long)hash;	// IMP=0x0010000000074ced
- (id)description;	// IMP=0x0010000000074cd9
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x0010000000074ba8
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x0010000000074b58
- (id)succinctDescriptionBuilder;	// IMP=0x0010000000074b3c
- (id)succinctDescription;	// IMP=0x0010000000074aec
- (id)init;	// IMP=0x0010000000074a96

@end

