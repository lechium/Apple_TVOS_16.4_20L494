//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSSet;
@protocol GTXPCConnection;

@interface GTFileWriterServiceXPCProxy : NSObject
{
    id <GTXPCConnection> _connection;	// 8 = 0x8
    NSSet *_ignoreMethods;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000004b158
- (void)abortSession:(unsigned long long)arg1;	// IMP=0x001000000004b0eb
- (void)finishSession:(unsigned long long)arg1;	// IMP=0x001000000004b07e
- (void)writeFileChunks:(id)arg1 withData:(id)arg2 session:(unsigned long long)arg3;	// IMP=0x001000000004af6f
- (void)beginTransferSessionWithFileEntries:(id)arg1 basePath:(id)arg2 device:(id)arg3 config:(CDStruct_32a7f38a)arg4 sessionID:(unsigned long long)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x001000000004ad7c
- (void)initiateTransfer:(id)arg1 basePath:(id)arg2 device:(id)arg3 config:(CDStruct_32a7f38a)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x001000000004abab
- (_Bool)respondsToSelector:(SEL)arg1;	// IMP=0x001000000004ab29
- (id)initWithConnection:(id)arg1 remoteProperties:(id)arg2;	// IMP=0x000000000004a9ad

@end

