//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSHashTable, NSString;

@interface MontrealNNModelTensor
{
    NSString *_name;	// 8 = 0x8
    NSArray *_dimension;	// 16 = 0x10
    NSHashTable *_asInput;	// 24 = 0x18
    NSHashTable *_asOutput;	// 32 = 0x20
}

+ (id)createOutputs:(CDStruct_96916c69 *)arg1 outputChunks:(id)arg2 nodeName:(id)arg3;	// IMP=0x001000000014ddd0
+ (id)createInputs:(CDStruct_96916c69 *)arg1 inputChunks:(id)arg2 nodeName:(id)arg3;	// IMP=0x001000000014db20
- (void).cxx_destruct;	// IMP=0x000000000014e4c0
@property(readonly) NSHashTable *asOutput; // @synthesize asOutput=_asOutput;
@property(readonly) NSHashTable *asInput; // @synthesize asInput=_asInput;
@property(readonly) NSArray *dimension; // @synthesize dimension=_dimension;
@property(readonly) NSString *name; // @synthesize name=_name;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000014e080
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000014da00
- (id)jsonDescription;	// IMP=0x000000000014d920
- (void)description:(id)arg1 indent:(id)arg2;	// IMP=0x000000000014d430
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000014d370
- (unsigned long long)tensorSize;	// IMP=0x000000000014d210
- (id)initWithName:(id)arg1 dimension:(id)arg2;	// IMP=0x000000000014d0e0
- (id)checkForValidity;	// IMP=0x000000000014cff0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
