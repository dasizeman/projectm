#ifndef PULSE_AUDIO_THREAD
#include <QObject>
#include <QTimer>
#include <QThread>
class projectM;

#include <pulse/simple.h>
#include <pulse/error.h>

class PulseAudioThread : public QThread
{	
	Q_OBJECT
	public:
		PulseAudioThread () {}
		PulseAudioThread(int _argc, char **_argv, projectM * projectM, QObject *parent);
		~PulseAudioThread() ;
		void run();
		void cleanup();

	private:
		void init();
		int argc;
		char ** argv;
		QTimer * m_timer;
		pa_sample_spec ss ;
		pa_simple * s ;
		projectM * m_projectM;

	public slots:
		void updatePCM();

};
#endif