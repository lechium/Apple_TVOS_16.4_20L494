//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INImage.h>

@class NSString;

@interface INImage (Workflow)
+ (Class)wf_contentItemClass;	// IMP=0x0010000000239cdf
+ (id)imageWithWFImage:(id)arg1;	// IMP=0x001000000029aa84
- (void)wf_transformUsingCodableAttribute:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000239808
- (id)wf_contentItemWithCodableAttribute:(id)arg1;	// IMP=0x001000000023976c
- (id)wf_image;	// IMP=0x001000000029a887

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
