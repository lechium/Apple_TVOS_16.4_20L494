//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol GTFileWriterService;

@interface GTFileWriterServiceXPCDispatcher
{
    id <GTFileWriterService> _service;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000004f65b
- (void)initiateTransfer_basePath_device_config_completionHandler_:(id)arg1 replyConnection:(id)arg2;	// IMP=0x001000000004f479
- (void)abortSession_:(id)arg1 replyConnection:(id)arg2;	// IMP=0x001000000004f440
- (void)finishSession_:(id)arg1 replyConnection:(id)arg2;	// IMP=0x001000000004f407
- (void)writeFileChunks_withData_session_:(id)arg1 replyConnection:(id)arg2;	// IMP=0x001000000004f30d
- (void)beginTransferSessionWithFileEntries_basePath_device_config_sessionID_completionHandler_:(id)arg1 replyConnection:(id)arg2;	// IMP=0x001000000004f11c
- (id)initWithService:(id)arg1 properties:(id)arg2;	// IMP=0x001000000004f07c

@end
