//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSData, SHJSONLCustomCatalogTransformer;
@protocol SHCustomCatalogStorage;

__attribute__((visibility("hidden")))
@interface SHCustomCatalogContainer : NSObject
{
    id <SHCustomCatalogStorage> _container;	// 8 = 0x8
    SHJSONLCustomCatalogTransformer *_transformer;	// 16 = 0x10
}

+ (id)customCatalogURLFromURL:(id)arg1 error:(id *)arg2;	// IMP=0x006000000000aba1
- (void).cxx_destruct;	// IMP=0x000000000000aeb4
@property(readonly, nonatomic) SHJSONLCustomCatalogTransformer *transformer; // @synthesize transformer=_transformer;
@property(readonly, nonatomic) id <SHCustomCatalogStorage> container; // @synthesize container=_container;
@property(readonly, nonatomic) NSArray *referenceSignatures;
- (void)addSignature:(id)arg1 representingMediaItems:(id)arg2;	// IMP=0x000000000000adca
- (id)referenceSignatureForTrackID:(unsigned long long)arg1;	// IMP=0x000000000000ad6b
- (id)mediaItemsForReferenceSignature:(id)arg1;	// IMP=0x000000000000ace8
- (_Bool)writeToURL:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000a920
@property(readonly, nonatomic) NSData *dataRepresentation;
- (_Bool)loadFromURL:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000a5e2
- (_Bool)loadFromData:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000a469
- (id)init;	// IMP=0x000000000000a3f4

@end

