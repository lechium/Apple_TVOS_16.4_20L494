//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSURL.h>

@interface NSURL (TRI)
+ (id)triContainerURLWithPath:(id)arg1 containerId:(id)arg2 containerType:(long long)arg3;	// IMP=0x008000000002dc40
+ (id)triParseURLFromString:(id)arg1;	// IMP=0x008000000002d473
+ (id)triParseURLFromString:(id)arg1 isDirectory:(_Bool)arg2;	// IMP=0x008000000002d38e
- (id)triURLByResolvingSymlinksInPathIncludingPrivate;	// IMP=0x001000000002dd4c
- (_Bool)triIsContainerURL;	// IMP=0x001000000002dbbd
- (id)triPathAsOwner:(_Bool)arg1;	// IMP=0x001000000002d887
- (_Bool)triIsEqual:(id)arg1;	// IMP=0x001000000002d7a3
- (id)triSaveURLToString;	// IMP=0x001000000002d487
@end
