//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TeaFoundation/NSObject-Protocol.h>

@class NSURL;

@protocol TFArchiver <NSObject>
- (_Bool)unarchive:(NSURL *)arg1 toLocation:(NSURL *)arg2;
- (_Bool)archiveDirectory:(NSURL *)arg1 toLocation:(NSURL *)arg2;
@end

