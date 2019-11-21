#include "vtkCubSource.h"
#include "vtkPolyDataMapper.h"
#include "vtkRenderer.h"
#include "vtkRenderWindow.h"
#include "vtkRenderWindowInteractor.h"
#include "vtkInteractorStyleTrackballCamera.h"
#include "vtkPolyData.h"
#include "vtkGlyph3DMapper.h"

vtkSmartPointer<vtkRenderer> renderer;
vtkSmartPointer<vtkRenderWindow> renderWindow;
vtkSmartPointer<vtkRenderWindowInteractor> RenderWindowInteractor;
vtkSmartPointer<vtkPoints> points;

// Init the renderer and rendering window w interactor object
void intializeRendering(){
	renderer = vtkSmartPointer<vtkRenderer>::New() // creating new renderer
	renderer->SetBackground(1.,1.,1.); //setting background to white

	renderWindow = vtkSmartPointer<vtkRenderWindow>::New()//creating renderer window
	renderWindow->SetSize(1000,1000); //size 
	renderWindow->AddRenderer(renderer);// adding previously created renderer

	points = vtkSmartPointer<vtkPoints>::New(); //vector w points
}