//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSURL.h>

@class NSString;

@interface NSURL (AFBundleResourceSupport)
+ (id)_af_URLWithMessageIdentifier:(id)arg1;	// IMP=0x00100000000f7b84
- (id)af_getBundleResourceURL;	// IMP=0x00100000000298e9
- (void)af_enumerateDigestibleChunksWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000004b45a
- (id)_af_messageIdentifierValue;	// IMP=0x00100000000f7c8e
- (_Bool)isAMOSCommittedIdentifier;	// IMP=0x001000000016aea5
- (_Bool)isAMOSIdentifier;	// IMP=0x001000000016ae4d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

