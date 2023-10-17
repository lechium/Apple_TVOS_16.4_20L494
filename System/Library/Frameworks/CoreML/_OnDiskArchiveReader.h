//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface _OnDiskArchiveReader : NSObject
{
    NSArray *_layerInfos;	// 8 = 0x8
    NSString *_modelPath;	// 16 = 0x10
    NSDictionary *_netJson;	// 24 = 0x18
    NSDictionary *_shapeJson;	// 32 = 0x20
}

+ (id)modelShapeFileName;	// IMP=0x00100000000cfe3e
+ (id)modelNetFileName;	// IMP=0x00100000000cfdd3
+ (id)modelName;	// IMP=0x00100000000cfdc6
+ (id)readerFromArchiver:(void *)arg1 error:(id *)arg2;	// IMP=0x00100000000cfb5f
+ (id)parseCompiledNetworkBlobWithName:(id)arg1 archive:(void *)arg2 error:(id *)arg3;	// IMP=0x00100000000cf8c3
- (void).cxx_destruct;	// IMP=0x00000000000cf885
@property(readonly, copy, nonatomic) NSDictionary *shapeJson; // @synthesize shapeJson=_shapeJson;
@property(readonly, copy, nonatomic) NSDictionary *netJson; // @synthesize netJson=_netJson;
@property(readonly, copy, nonatomic) NSString *modelPath; // @synthesize modelPath=_modelPath;
@property(readonly, nonatomic) NSArray *layerInfos; // @synthesize layerInfos=_layerInfos;
- (void)copyLayerShapesToContainer:(id)arg1;	// IMP=0x00000000000cf2d6
- (id)transformParams;	// IMP=0x00000000000cf26b
- (id)loadUpdatableParams:(id *)arg1;	// IMP=0x00000000000cf09c
- (id)initWithNetJson:(id)arg1 shapeJson:(id)arg2 modelPath:(id)arg3;	// IMP=0x00000000000cec50

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

