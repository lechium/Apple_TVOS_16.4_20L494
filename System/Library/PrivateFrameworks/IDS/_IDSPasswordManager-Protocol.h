//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IDS/NSObject-Protocol.h>

@class NSString;

@protocol _IDSPasswordManager <NSObject>
- (void)setPassword:(NSString *)arg1 forUsername:(NSString *)arg2 onService:(NSString *)arg3 completionBlock:(void (^)(NSString *, NSString *, _Bool))arg4;
@end
