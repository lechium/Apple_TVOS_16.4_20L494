//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "WFNSItemProviderContentItem.h"

@class NSDictionary, NSString, WFFileType, WFObjectType;

__attribute__((visibility("hidden")))
@interface WFPhotoItemProviderContentItem : WFNSItemProviderContentItem
{
}

+ (id)countDescription;	// IMP=0x00100000000c26ae
+ (id)pluralTypeDescription;	// IMP=0x00100000000c2696
+ (id)typeDescription;	// IMP=0x00100000000c267e
+ (id)contentCategories;	// IMP=0x00100000000c2617
+ (id)outputTypes;	// IMP=0x00100000000c259c
+ (id)itemWithItemProviderItem:(id)arg1 photoMediaFileRepresentation:(id)arg2 assetIdentifier:(id)arg3;	// IMP=0x00100000000c2239
- (id)defaultSourceForRepresentation:(id)arg1;	// IMP=0x00000000000c294e
- (id)outputTypes;	// IMP=0x00000000000c28aa

// Remaining properties
@property(readonly, nonatomic) NSDictionary *additionalRepresentationsForSerialization;
@property(readonly, nonatomic) _Bool cachesSupportedTypes;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) _Bool hasStringOutput;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool includesFileRepresentationInSerializedItem;
@property(readonly, nonatomic) NSDictionary *metadataForSerialization;
@property(readonly, nonatomic) WFFileType *preferredFileType;
@property(readonly, nonatomic) WFObjectType *preferredObjectType;
@property(readonly) Class superclass;

@end

