//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSXPCConnection;

@interface IDSXPCConnectionTimeoutProxy : NSObject
{
    id _target;	// 8 = 0x8
    IDSXPCConnection *_connection;	// 16 = 0x10
    double _timeout;	// 24 = 0x18
    CDUnknownBlockType _errorHandler;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000ddddc
@property(copy, nonatomic) CDUnknownBlockType errorHandler; // @synthesize errorHandler=_errorHandler;
@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(retain, nonatomic) IDSXPCConnection *connection; // @synthesize connection=_connection;
@property(retain, nonatomic) id target; // @synthesize target=_target;
- (_Bool)_invocationHasBlock:(id)arg1;	// IMP=0x00000000000ddcc9
- (id)methodSignatureForSelector:(SEL)arg1;	// IMP=0x00000000000ddc15
- (_Bool)respondsToSelector:(SEL)arg1;	// IMP=0x00000000000ddb71
- (void)forwardInvocation:(id)arg1;	// IMP=0x00000000000dd13b
- (void)dealloc;	// IMP=0x00000000000dd062
- (id)initWithTarget:(id)arg1 connection:(id)arg2 timeoutInSeconds:(double)arg3 errorHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000000dceba

@end

