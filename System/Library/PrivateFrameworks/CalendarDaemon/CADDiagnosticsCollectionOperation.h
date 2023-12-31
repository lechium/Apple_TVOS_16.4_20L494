//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOperation.h>

@class ClientConnection, NSDateFormatter, NSMutableDictionary, NSMutableSet, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface CADDiagnosticsCollectionOperation : NSOperation
{
    ClientConnection *_conn;	// 8 = 0x8
    unsigned int _token;	// 16 = 0x10
    long long _options;	// 24 = 0x18
    int _batchDepth;	// 32 = 0x20
    NSMutableDictionary *_files;	// 40 = 0x28
    NSMutableSet *_changedFiles;	// 48 = 0x30
    _Bool _finished;	// 56 = 0x38
    NSMutableSet *_temporaryFileNames;	// 64 = 0x40
    NSURL *_logDirectoryURL;	// 72 = 0x48
    NSURL *_incomingLogDirectoryURL;	// 80 = 0x50
    NSURL *_completedLogDirectoryURL;	// 88 = 0x58
    struct os_unfair_lock_s _lock;	// 96 = 0x60
    struct __sFILE *_logFile;	// 104 = 0x68
    NSURL *_logFileURL;	// 112 = 0x70
    NSDateFormatter *_dateFormatter;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x00000000000504f4
@property(readonly, nonatomic) unsigned int token; // @synthesize token=_token;
@property(readonly, nonatomic) _Bool redactLogs;
@property(readonly, nonatomic) _Bool canceled;
- (void)reportFileStatusChangesToClient;	// IMP=0x0000000000050001
- (void)setStatus:(unsigned long long)arg1 forFile:(id)arg2;	// IMP=0x000000000004fdc6
- (id)finalFileForFile:(id)arg1;	// IMP=0x000000000004fcb4
- (void)batch:(CDUnknownBlockType)arg1;	// IMP=0x000000000004fc7a
- (void)finish;	// IMP=0x000000000004fb1a
- (void)logWithLevel:(unsigned char)arg1 formatString:(id)arg2 arguments:(struct __va_list_tag [1])arg3;	// IMP=0x000000000004f7d3
- (void)logError:(id)arg1;	// IMP=0x000000000004f72a
- (void)log:(id)arg1;	// IMP=0x000000000004f684
- (id)_createLogFile;	// IMP=0x000000000004f660
- (void)deleteTemporaryFile:(id)arg1;	// IMP=0x000000000004f491
- (id)temporaryFileForName:(id)arg1;	// IMP=0x000000000004f2b9
- (id)_randomString;	// IMP=0x000000000004f229
- (id)_createLogDirectory;	// IMP=0x000000000004f0c7
- (void)collect:(id)arg1;	// IMP=0x000000000004f0c1
- (void)determineExpectedOutputFiles:(id)arg1;	// IMP=0x000000000004f099
- (void)main;	// IMP=0x000000000004eb9a
- (id)loadLogCollectors;	// IMP=0x000000000004ead0
- (id)initWithConnection:(id)arg1 token:(unsigned int)arg2 options:(long long)arg3;	// IMP=0x000000000004e708

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

