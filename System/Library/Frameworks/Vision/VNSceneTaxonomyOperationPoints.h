//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMapTable, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface VNSceneTaxonomyOperationPoints
{
    NSString *_frameworkOperationPointsIdentifier;	// 8 = 0x8
    NSURL *_nonframeworkDataURL;	// 16 = 0x10
    NSMapTable *_labelToOperationPointsDataIndexMap;	// 24 = 0x18
    CDStruct_47a8b21a *_operationPointsDataArray;	// 32 = 0x20
    unsigned long long _cachedHashValue;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00600000001b87b4
+ (id)loadFromURL:(id)arg1 error:(id *)arg2;	// IMP=0x00600000001b85b0
+ (id)loadFromPropertyList:(id)arg1 error:(id *)arg2;	// IMP=0x00600000001b7dfd
+ (id)URLForIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x00600000001b7bd5
+ (id)loadFromIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x00600000001b7af4
- (void).cxx_destruct;	// IMP=0x00000000001b76c2
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001b73b3
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001b72ff
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001b6f2f
- (unsigned long long)hash;	// IMP=0x00000000001b6bfa
- (_Bool)getRecall:(float *)arg1 forClassificationIdentifier:(id)arg2 confidence:(float)arg3 error:(id *)arg4;	// IMP=0x00000000001b6b85
- (_Bool)getConfidence:(float *)arg1 forClassificationIdentifier:(id)arg2 withRecall:(float)arg3 error:(id *)arg4;	// IMP=0x00000000001b6b10
- (_Bool)getPrecision:(float *)arg1 forClassificationIdentifier:(id)arg2 confidence:(float)arg3 error:(id *)arg4;	// IMP=0x00000000001b6a98
- (_Bool)getConfidence:(float *)arg1 forClassificationIdentifier:(id)arg2 withPrecision:(float)arg3 error:(id *)arg4;	// IMP=0x00000000001b6a20
- (_Bool)getDefaultConfidence:(float *)arg1 forClassificationIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x00000000001b69ae
- (id)_propertyListRepresentation;	// IMP=0x00000000001b64f4
- (id)_allClassificationIdentifiers;	// IMP=0x00000000001b64df
- (const CDStruct_47a8b21a *)_operationPointsDataForClassificationIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001b63a7
- (void)dealloc;	// IMP=0x00000000001b6366
- (id)initWithLabelToOperationPointsDataIndexMap:(id)arg1 operationPointsDataArray:(CDStruct_47a8b21a *)arg2;	// IMP=0x00000000001b62e6

@end

