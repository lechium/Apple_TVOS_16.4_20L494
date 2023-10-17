//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SCNExportOperation.h"

@class NSDictionary, NSError, NSURL, SCNNode, SCNRenderer, SCNScene;

__attribute__((visibility("hidden")))
@interface _SCNExportOperation : SCNExportOperation
{
    void *_userInfo;	// 8 = 0x8
    SEL _didEndSelector;	// 16 = 0x10
    SCNScene *_scene;	// 24 = 0x18
    struct CGSize _size;	// 32 = 0x20
    SCNNode *_pointOfView;	// 48 = 0x30
    double _startTime;	// 56 = 0x38
    double _endTime;	// 64 = 0x40
    double _systemTime;	// 72 = 0x48
    _Bool _canceled;	// 80 = 0x50
    _Bool _succeded;	// 81 = 0x51
    double _progress;	// 88 = 0x58
    NSError *_error;	// 96 = 0x60
    id _delegate;	// 104 = 0x68
    NSDictionary *_attributes;	// 112 = 0x70
    NSURL *_outputURL;	// 120 = 0x78
    SCNRenderer *_renderer;	// 128 = 0x80
    unsigned long long _antialiasingMode;	// 136 = 0x88
}

@property(nonatomic) _Bool succeded; // @synthesize succeded=_succeded;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSURL *outputURL; // @synthesize outputURL=_outputURL;
@property(retain, nonatomic) NSDictionary *attributes; // @synthesize attributes=_attributes;
@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(nonatomic) _Bool canceled; // @synthesize canceled=_canceled;
@property(nonatomic) id delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double endTime; // @synthesize endTime=_endTime;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(retain, nonatomic) SCNScene *scene; // @synthesize scene=_scene;
@property(nonatomic) SEL didEndSelector; // @synthesize didEndSelector=_didEndSelector;
@property(nonatomic) void *userInfo; // @synthesize userInfo=_userInfo;
@property(retain, nonatomic) SCNRenderer *renderer; // @synthesize renderer=_renderer;
@property(nonatomic) unsigned long long antialiasingMode; // @synthesize antialiasingMode=_antialiasingMode;
@property(retain, nonatomic) SCNNode *pointOfView; // @synthesize pointOfView=_pointOfView;
- (void)cancel;	// IMP=0x000000000029fd0b
- (void)dealloc;	// IMP=0x000000000029fc7b

@end

