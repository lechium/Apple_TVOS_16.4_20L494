//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSError, NSString;

__attribute__((visibility("hidden")))
@interface SBKResponseStatus : NSObject
{
    _Bool _isRecoverable;	// 8 = 0x8
    _Bool _isError;	// 9 = 0x9
    _Bool _shouldFileRadar;	// 10 = 0xa
    _Bool _isPuntedError;	// 11 = 0xb
    long long _statusCode;	// 16 = 0x10
    NSString *_consoleDescription;	// 24 = 0x18
}

+ (id)responseStatusForStatusCodeNumber:(id)arg1;	// IMP=0x0060000000021c90
- (void).cxx_destruct;	// IMP=0x0000000000021c80
@property(readonly, nonatomic) _Bool isPuntedError; // @synthesize isPuntedError=_isPuntedError;
@property(readonly, nonatomic) _Bool shouldFileRadar; // @synthesize shouldFileRadar=_shouldFileRadar;
@property(readonly, nonatomic) _Bool isError; // @synthesize isError=_isError;
@property(readonly, nonatomic) _Bool isRecoverable; // @synthesize isRecoverable=_isRecoverable;
@property(readonly, copy, nonatomic) NSString *consoleDescription; // @synthesize consoleDescription=_consoleDescription;
@property(readonly, nonatomic) long long statusCode; // @synthesize statusCode=_statusCode;
@property(readonly, nonatomic) _Bool isGenericError;
@property(readonly, nonatomic) _Bool isValidationError;
@property(readonly, nonatomic) _Bool isAuthenticationError;
@property(readonly, nonatomic) _Bool isUnsupportedClient;
@property(readonly, nonatomic) NSError *requestError;
@property(readonly, nonatomic) _Bool isSuccess;
- (id)initWithStatus:(long long)arg1 isRecoverable:(_Bool)arg2 isError:(_Bool)arg3 consoleDescription:(id)arg4 shouldFileRadar:(_Bool)arg5;	// IMP=0x0000000000021a33

@end
