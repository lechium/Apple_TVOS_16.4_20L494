//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSDate.h>

@class NSString;

@interface NSDate (AFSecurityDigestibleChunksProvider)
- (void)af_enumerateDigestibleChunksWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x002000000004af49
- (_Bool)af_isTomorrow;	// IMP=0x0020000000137c69
- (_Bool)af_isToday;	// IMP=0x0020000000137c0f
- (_Bool)_af_isSameDayAsDate:(id)arg1;	// IMP=0x0020000000137ac6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
