//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ContentKit/WFContentCollection.h>

@interface WFContentCollection (SandboxExtension)
+ (void)generateCollectionFromPasteboard:(id)arg1 sandboxExtensionProvider:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x005000000000d2b0
+ (id)requiredResourcesForContentInPasteboard:(id)arg1;	// IMP=0x005000000000d2a3
- (id)requiredResourcesForContent;	// IMP=0x001000000000d1bf
- (void)getRecipientsIgnoringContactAccessResourceAvailability:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000011fbb7
- (void)getRecipients:(CDUnknownBlockType)arg1;	// IMP=0x001000000011fba0
@end

