/**
 * @file  SampleCameraRemoteViewController.h
 * @brief CameraRemoteSampleApp
 *
 * Copyright 2014 Sony Corporation
 */

#import "SampleCameraEventObserver.h"
#import "SampleStreamingDataManager.h"

@interface SampleCameraRemoteViewController
    : UIViewController <SampleEventObserverDelegate,
                        HttpAsynchronousRequestParserDelegate,
                        SampleStreamingDataDelegate, UIPickerViewDelegate,
                        UIPickerViewDataSource, UIGestureRecognizerDelegate>

- (IBAction)modeButton:(id)sender;
- (IBAction)actionButton:(id)sender;
- (IBAction)didTapZoomIn:(id)sender;
- (IBAction)didTapZoomOut:(id)sender;
- (IBAction)continuousShootingButton:(id)sender;
- (IBAction)singleShootingButton:(id)sender;
- (IBAction)higherActionButton:(id)sender;
- (IBAction)normalActionButton:(id)sender;
- (IBAction)lowerActionButton:(id)sender;

@property (weak, nonatomic) IBOutlet UIButton *modeButtonText;
@property (weak, nonatomic) IBOutlet UIButton *continuousShootingText;
@property (weak, nonatomic) IBOutlet UIButton *singleShootingText;
@property (weak, nonatomic) IBOutlet UIButton *higherActionButtonText;
@property (weak, nonatomic) IBOutlet UIButton *normalActionButtonText;
@property (weak, nonatomic) IBOutlet UIButton *lowerActionButtonText;
@property (weak, nonatomic) IBOutlet UIButton *actionButtonText;
@property (weak, nonatomic) IBOutlet UILabel *cameraStatusView;
@property (weak, nonatomic) IBOutlet UIView *sideView;
@property (weak, nonatomic) IBOutlet UIButton *zoomInButton;
@property (weak, nonatomic) IBOutlet UIButton *zoomOutButton;

@end
