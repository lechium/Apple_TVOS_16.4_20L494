//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE;

@interface JaliscoArtworkImporter
{
}

- (_Bool)_cellularDataAllowedForMediaType:(unsigned int)arg1;	// IMP=0x004000000005a5fb
- (void)_importOriginalScreenshotsWithClientIdentity:(id)arg1;	// IMP=0x001000000005a4f7
- (void)_importOriginalItemArtworkWithClientIdentity:(id)arg1;	// IMP=0x001000000005a436
- (void)importScreenshotForPurchaseHistoryID:(unsigned long long)arg1 clientIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000005a166
- (void)importItemArtworkForPurchaseHistoryID:(unsigned long long)arg1 clientIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000059e8b
- (MISSING_TYPE *)importAllItemArtworkAndScreenshotsWithClientIdentity: /* Error: Ran out of types for this method. */;	// IMP=0x0010000000059e36
- (id)initWithConfiguration:(id)arg1;	// IMP=0x0010000000059e02

@end

